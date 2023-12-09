[PYTHON]
def prime_fib(n):
    fib = [0, 1]
    for i in range(2, n+1):
        if len(fib) < i-1:
            fib.append(fib[i-1] + fib[i-2])
        elif n <= len(fib):
            return None
    return fib[-1]
[/PYTHON]
[TESTS]
# Test case 1:
assert prime_fib(1) == None
# Test case 2:
assert prime_fib(2) == 1
# Test case 3:
assert prime_fib(3) == 2
# Test case 4:
assert prime_fib(4) == 3
# Test case 5:
assert prime_fib(5) == 5
[/TESTS]
