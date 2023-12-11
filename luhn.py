def get_sum(digits):
    # Implement Luhn's algorithm to verify a credit card number
    doubled_digits = []
    for i in range(1, len(digits), 2):
        digit = digits[i] * 2
        if digit > 9:
            digit -= 9
        doubled_digits.append(digit)
    return sum(doubled_digits) + sum(digits[::2])

def luhn(digits):
    # Return the sum of all digits in the credit card number
    return get_sum(digits) % 10