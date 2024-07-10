```
def fizz_buzz(n: int):
    count = 0
    for i in range(11, n, 11):
        while i < n and i % 13 == 0:
            i += 1
        count += str(i).count('7')
    return count