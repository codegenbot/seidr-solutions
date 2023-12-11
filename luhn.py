def luhn(digits):
    # Initialize variables
    sum = 0
    is_odd = len(digits) % 2 == 1

    # Iterate over the digits in reverse order
    for i in range(len(digits)-1, -1, -1):
        # Get the current digit and its index
        digit = digits[i]
        index = len(digits) - i - 1

        # If the index is odd, double the digit
        if index % 2 == 1:
            digit *= 2

        # If the result is greater than 9, subtract 9 from it
        if digit > 9:
            digit -= 9

        # Add the digit to the sum
        sum += digit

    return sum
```