```Python
def digits(n):
    n = str(abs(n))
    if n[0] == '-':
        return max(int(digit) for digit in n[1:])
    else:
        return max(int(digit) for digit in n)