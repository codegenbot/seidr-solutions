def fizz_buzz(n: int):
    count = 0
    for i in range(1, n + 1):
        if i % 15 == 0:
            count += 1
        elif i % 3 == 0 and i % 5 != 0:
            count += (i // 3)
        elif i % 5 == 0 and i % 3 != 0:
            count += (i // 5)
        elif i % 15 == 0:
            count += 1
    return count