def fizz_buzz(n: int):
    count = 0
    for i in range(1, n + 1):
        if '3' in str(i) or '7' in str(i) or i % 3 == 0 or i % 7 == 0:
            count += 1
    return count