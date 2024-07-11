```
def fizz_buzz(n: int):
    result = 0
    for i in range(1, n+1):
        if i % 3 == 0:
            if i % 5 == 0:
                result += 1
            else:
                result += 1/3
        elif i % 5 == 0:
            result += 1/5
        else:
            result += 1
    return int(result)