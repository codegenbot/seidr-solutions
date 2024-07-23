```
def fizz_buzz(n: int):
    count = 0
    for i in range(1, n + 1):
        if i % 15 == 0:
            pass
        elif i % 3 == 0 and not (i % 5 == 0):
            pass
        elif i % 5 == 0 and not (i % 3 == 0):
            pass
        else:
            count += 1
    return count

print(fizz_buzz(100))