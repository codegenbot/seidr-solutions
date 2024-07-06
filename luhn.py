import numpy as np


def luhn_algorithm(digits):
    # Initialize variables
    sum = 0
    is_even = False

    # Iterate over digits in reverse order
    for i in range(len(digits) - 1, -1, -1):
        digit = int(digits[i])

        # Check if the current digit is even
        if is_even:
            digit *= 2

            # If the result is greater than 9, subtract 9 from it
            if digit > 9:
                digit -= 9

        # Add the current digit to the sum
        sum += digit

        # Toggle the parity flag
        is_even = not is_even

    return sum