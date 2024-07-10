```
def digits(n):
    total = 0
    has_odd = False
    for digit in str(n):
        if int(digit) % 2 != 0:
            has_odd = True
        total += int(digit)
    return total if not has_odd else 1