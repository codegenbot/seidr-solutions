```
def fizz_buzz(n: int):
    count = 0
    for i in range(11, n, 11):
        str_i = str(i)
        if '7' in str_i:
            count += 1
    for i in range(13, n, 13):
        str_i = str(i)
        if '7' in str_i:
            count += 1
    return count