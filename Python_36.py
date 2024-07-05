def fizz_buzz(n):
    count = 0
    for i in range(1, n + 1):
        if str(i).endswith("7") or ("7" in str(i) and i % 3 == 0):
            count += 1
    return count