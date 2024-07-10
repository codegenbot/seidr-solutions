```
def fizz_buzz(n: int):
    count = 0
    for i in range(11, n, 11):
        if '7' in str(i):
            count += 1
    for i in range(13, n, 13):
        if '7' in str(i):
            count += 1
    return count