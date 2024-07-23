```
def fizz_buzz(n: int):
    result = 0
    for i in range(1, n + 1):
        if i % 15 == 0:
            result += 1
        elif i % 3 == 0:
            result += 1
        elif i % 5 == 0:
            result += 1
        else:
            result += str(i)
    return result

print(fizz_buzz(100))