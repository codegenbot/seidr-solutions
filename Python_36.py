```
def fizz_buzz(n: int):
    result = 0
    for i in range(1, n + 1):
        if i % 3 == 0 and i % 5 == 0:
            result += 1
        elif i % 3 == 0:
            result += 2
        elif i % 5 == 0:
            result += 4
        else:
            result += i
    return result