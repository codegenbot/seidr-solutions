def digits(n):
    total = 0
    for digit in str(n):
        if int(digit) % 2 != 0:
            total += int(digit)
    return total