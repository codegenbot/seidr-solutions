def luhn(digits):
    # Initialize variables
    sum = 0
    is_odd = False

    # Iterate over digits in reverse order
    for digit in reversed(digits):
        # Check if current digit is odd
        if is_odd:
            # Double the digit and subtract 9 if necessary
            doubled_digit = (digit * 2) % 9
            if doubled_digit > 9:
                doubled_digit -= 9
            sum += doubled_digit
        else:
            sum += digit
        is_odd = not is_odd
    return sum