```
def fizz_buzz(n: int):
    count = 0
    for i in range(11, n):
        if i % 11 == 0 or i % 13 == 0:
            while i > 9 and str(i).count('7') == 0:
                i -= 1
            count += str(i).count('7')
    return count