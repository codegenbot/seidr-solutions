```
def digits(n):
    product = 1 if len(str(n)) % 2 == 0 else int(str(n)[0])
    for digit in str(n)[1:]:
        if int(digit) % 2 != 0:
            product *= int(digit)
    return product