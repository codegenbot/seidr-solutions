def fizz_buzz(n):
    count = 0
    for i in range(1, n + 1):
        if i % 3 == 0 and "7" in str(i % 10):
            count += 1
    return count