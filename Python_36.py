def fizz_buzz(n):
    count = 0
    for i in range(1, n+1):
        if i % 11 == 0 or i % 13 == 0:
            if '7' in str(i) and not (i % 11 == 0 and i % 13 == 0):
                count += 1
    return count