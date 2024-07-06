```
def digits(n):
    count = sum(int(digit) % 2 != 0 for digit in str(n))
    return 1 if count == 0 else 0