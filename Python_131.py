```
def digits(n):
    return sum(int(digit) ** 2 for digit in str(n) if int(digit) % 2 != 0)