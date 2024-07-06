def luhn_algorithm(digits):
    # Initialize the sum to 0
    sum = 0
    for i in range(16):
        # If the current digit is even (i.e., it's a multiple of 2), double it and subtract 9 from the result if it's greater than 9
        if i % 2 == 0:
            digit = digits[i] * 2
            if digit > 9:
                sum += digit - 9
            else:
                sum += digit
        # If the current digit is odd (i.e., it's not a multiple of 2), add it to the sum directly
        else:
            sum += digits[i]
    return sum