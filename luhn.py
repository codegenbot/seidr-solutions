def luhn(digits):
    # Initialize variables
    sum = 0
    is_odd = len(digits) % 2 == 1

    # Iterate over the digits in reverse order
    for i in range(len(digits) - 1, -1, -1):
        digit = int(digits[i])

        # Double every other digit starting with the second digit
        if is_odd:
            digit *= 2

        # If the result is over 9, subtract 9 from it
        if digit > 9:
            digit -= 9

        # Add the new digit to the sum
        sum += digit

        # Toggle the parity for the next iteration
        is_odd = not is_odd

    return sum