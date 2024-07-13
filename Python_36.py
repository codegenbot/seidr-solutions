def fizz_buzz(n: int):
    count = 0
    for i in range(1, n+1):
        if i % 3 == 0 and i % 5 == 0:
            count += 1
        elif i % 3 == 0:
            pass
        elif i % 5 == 0:
            pass
        else:
            pass
    return count