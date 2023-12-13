
[SEED]
def main():
    # Complete the function below.
    n = int(input())
    pennies = 0
    nickles = 0
    dimes = 0
    quarters = 0
    if n >= 1:
        pennies = n
    if n >= 5:
        nickles = (n - pennies) // 5
        pennies = n % 5
    if n >= 10:
        dimes = (n - pennies - nickles * 5) // 10
        pennies = n % 10
    if n >= 25:
        quarters = (n - pennies - nickles * 5 - dimes * 10) // 25
        pennies = n % 25
    print(quarters, dimes, nickles, pennies, sep='\n')
[/SEED]
# run_spec {{
#   python3 coin-sums.py < tests/coin-sums-1.out > output && diff -q output tests/coin-sums-1.out || echo 'Failed test 1'
#   python3 coin-sums.py < tests/coin-sums-2.out > output && diff -q output tests/coin-sums-2.out || echo 'Failed test 2'
#   python3 coin-sums.py < tests/coin-sums-3.out > output && diff -q output tests/coin-sums-3.out || echo 'Failed test 3'
#   python3 coin-sums.py < tests/coin-sums-4.out > output && diff -q output tests/coin-sums-4.out || echo 'Failed test 4'
#   python3 coin-sums.py < tests/coin-sums-5.out > output && diff -q output tests/coin-sums-5.out || echo 'Failed test 5'
#   python3 coin-sums.py < tests/coin-sums-6.out > output && diff -q output tests/coin-sums-6.out || echo 'Failed test 6'
#   python3 coin-sums.py < tests/coin-sums-7.out > output && diff -q output tests/coin-sums-7.out || echo 'Failed test 7'
#   python3 coin-sums.py < tests/coin-sums-8.out > output && diff -q output tests/coin-sums-8.out || echo 'Failed test 8'
#   python3 coin-sums.py < tests/coin-sums-9.out > output && diff -q output tests/coin-sums-9.out || echo 'Failed test 9'
#   python3 coin-sums.py < tests/coin-sums-10.out > output && diff -q output tests/coin-sums-10.out || echo 'Failed test 10'
# }}
