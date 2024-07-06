```
def fizz_buzz(n: int):
    count = 0
    for i in range(11, n, 1):
        if i % 13 == 0 or i % 11 == 0:
            str_i = str(i)
            if '7' in str_i:
                count += 1
    return count