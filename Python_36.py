
[PYTHON]
def fizz_buzz(n: int) -> int:
    count = 0
    for i in range(1, n):
        if i % 11 == 0 or i % 13 == 0:
            if '7' in str(i):
                count += 1
    return count
[/PYTHON]

[TESTS]
# Test case 1:
assert fizz_buzz(50) == 0
# Test case 2:
assert fizz_buzz(78) == 2
# Test case 3:
assert fizz_buzz(79) == 3
[/TESTS]