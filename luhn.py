def luhn(digits):
    # Initialize variables
    sum = 0
    is_even = False

    # Iterate over digits in reverse order
    for i in range(len(digits) - 1, -1, -1):
        # Get current digit and determine if it is even or odd
        digit = int(digits[i])
        if is_even:
            digit *= 2
            if digit > 9:
                digit -= 9

        # Add digit to sum
        sum += digit

        # Toggle is_even flag
        is_even = not is_even

    return sum