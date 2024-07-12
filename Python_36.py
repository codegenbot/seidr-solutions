```
def fizz_buzz(n: int):
    count = 0
    for i in range(11, n):
        if i % 13 == 0 or i % 11 == 0:
            while i > 1 and str(i)[-1] != '7':
                i -= 1
            count += 1
    return count