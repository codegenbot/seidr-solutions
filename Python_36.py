[PYTHON]
def fizz_buzz(n):
    count = 0
    seen = set()
    for i in range(1, n+1):
        if i % 11 == 0 or i % 13 == 0:
            if '7' in str(i):
                count += 1
                seen.add(i)
    return len(seen)
[/PYTHON]
[TESTS]
# Test case 1:
assert fizz_buzz(10) == 2
# Test case 2:
assert fizz_buzz(15) == 3
# Test case 3:
assert fizz_buzz(20) == 4
[/TESTS]
