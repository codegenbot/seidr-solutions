def fizz_buzz(n: int):
    count = 0
    for i in range(1, n):
        if (i % 11 == 0 and i % 13 == 0) or ('7' in str(i)):
            count += 1
    return count