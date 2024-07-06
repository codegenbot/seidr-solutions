def luhn_algorithm(digits):
    sum = 0
    is_even = False
    for i in range(len(digits) - 1, -1, -1):
        digit = int(digits[i])
        if is_even:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum += digit
        is_even = not is_even
    return sum