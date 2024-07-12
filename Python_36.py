```
def fizz_buzz(n: int):
    count = 0
    for i in range(11, n, 11):
        while i < n and i % 13 == 0:
            if str(i).count('7') > 0:
                count += 1
            i += 1
    return count