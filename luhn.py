def luhn(digits):
    digits = list(map(int, digits))
    doubled_digits = []
    for i in range(1, len(digits) + 1):
        if i % 2 == 0:
            doubled_digits.append((digits[i - 1] * 2) % 9 or 9)
        else:
            doubled_digits.append(digits[i - 1])
    return sum(doubled_digits)