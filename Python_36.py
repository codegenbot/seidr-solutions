```
def fizz_buzz(n):
    count = 0
    result = 0
    for i in range(1, n + 1):
        if i % 15 == 0:
            count += 1
        elif i % 5 == 0:
            result += 1
        elif i % 3 == 0:
            result += 1
        else:
            pass
    return count