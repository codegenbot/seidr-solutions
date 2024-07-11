```
def fizz_buzz(n: int):
    count = 0
    for i in range(1, n+1):
        if i % 7 == 0:
            count += 1
    return count