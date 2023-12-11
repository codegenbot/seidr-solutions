def luhn(num):
    # Initialize variables
    sum = 0
    is_odd = False

    # Iterate over each digit in the number
    for i in range(len(num) - 1, -1, -2):
        # Get the current digit and convert it to an integer
        curr_digit = int(num[i])

        # If the current digit is odd, double it
        if is_odd:
            curr_digit *= 2

        # If the result of doubling is greater than 9, subtract 9 from it
        if curr_digit > 9:
            curr_digit -= 9

        # Add the current digit to the sum
        sum += curr_digit

        # Toggle the is_odd flag
        is_odd = not is_odd

    return sum