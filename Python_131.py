```
def digits(n):
    for digit in str(n):
        if int(digit) % 2 != 0:
            return -1
    return 1