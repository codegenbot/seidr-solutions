def fizz_buzz(n: int):
    count = 0
    for i in range(11, n, 1):
        if str(i).count("7") > 0:
            count += 1
        if i % 13 == 0:
            count += str(i).count("7")
    return count