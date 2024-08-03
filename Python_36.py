def fizz_buzz(n: int):
    count = 0
    for i in range(n):
        if i % 11 == 0 or i % 13 == 0:
            if i % 10 == 7 or i // 10 % 10 == 7:
                count += 1
    return count