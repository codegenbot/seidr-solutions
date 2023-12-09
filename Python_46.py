[PYTHON]
def fib4(n):
    if n <= 1:
        return n
    else:
        return fib4(n-1) + fib4(n-2)
[/PYTHON]
[TESTS]
# Test case 1:
assert fib4(0) == 0
# Test case 2:
assert fib4(1) == 1
# Test case 3:
assert fib4(2) == 1
# Test case 4:
assert fib4(3) == 2
# Test case 5:
assert fib4(4) == 3
# Test case 6:
assert fib4(5) == 5
# Test case 7:
assert fib4(6) == 8
# Test case 8:
assert fib4(7) == 13
# Test case 9:
assert fib4(8) == 21
# Test case 10:
assert fib4(9) == 34
[/TESTS]
