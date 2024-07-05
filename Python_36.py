def fizz_buzz(n):
    count = 0
    for i in range(1, n + 1):
        if str(i).endswith("7") or (str(i).find("7") != -1 and i % 3 == 0):
            count += 1
    return count