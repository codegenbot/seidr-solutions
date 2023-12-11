def luhn(digits):
    # Initialize variables
    sum = 0
    is_odd = False

    # Iterate over digits in reverse order
    for digit in reversed(digits):
        # Check if current digit is odd
        if is_odd:
            # Double the digit and subtract 9 if necessary
            digit = (digit * 2) % 9
            if digit > 9:
                digit -= 9
        sum += digit
        is_odd = not is_odd
    return sum