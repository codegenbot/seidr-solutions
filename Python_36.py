```
def fizz_buzz(n: int):
    count = 0
    for i in range(n-1):
        if (i+1) % 11 == 0 or (i+1) % 13 == 0:
            count += str(i+1).count('7')
    return count