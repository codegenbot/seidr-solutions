def fizz_buzz(n):
    if n < 3:
        return 0
    else:
        return len([i for i in range(1, n + 1) if i % 3 == 0 and "7" in str(i)])