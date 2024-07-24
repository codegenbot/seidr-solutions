```
def fizz_buzz(n: int):
    count = 0
    for i in range(1, n + 1):
        if i % 15 == 0:
            count += 1
        elif i % 3 == 0 and i != 15:
            count += 0.5
        elif i % 5 == 0 and i % 3 != 0:
            count += 0.5
    return int(count)