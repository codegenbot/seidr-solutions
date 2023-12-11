def luhn(digits):
    sum = 0
    is_odd = False
    for digit in reversed(digits):
        if is_odd:
            digit = (digit * 2) % 9
            if digit > 9:
                digit -= 9
        sum += digit
        is_odd = not is_odd
    return sum