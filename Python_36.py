```
print(fizz_buzz(100))
def fizz_buzz(n: int):
    total = 0
    for i in range(1, n+1):
        if i % 3 == 0 and i % 5 == 0:
            total += 1
    return str(total)