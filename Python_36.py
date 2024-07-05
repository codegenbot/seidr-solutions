def fizz_buzz(n):
    return len([i for i in range(1, n + 1) if i % 3 == 0 and "7" in str(i)])