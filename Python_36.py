def fizz_buzz(n):
    count = 0
    for i in range(1, n + 1):
        if str(i).find("7") != -1 or (i % 3 == 0 and i % 5 == 0):
            count += 1
    return count