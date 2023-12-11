def luhn(digits):
    # Double every other digit starting with the second digit
    doubled_digits = [int(digit) * 2 for digit in digits[1::2]]

    # Subtract 9 from each result that is over 9
    subtracted_digits = [digit - 9 if digit > 9 else digit for digit in doubled_digits]

    # Sum all the new digits
    summed_digits = sum(subtracted_digits)

    return summed_digits