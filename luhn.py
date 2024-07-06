def luhn_algorithm(digits):
    # Double every other digit starting from the second digit
    digits = [2 * d if i % 2 == 0 else d for i, d in enumerate(digits)]
    # Subtract 9 from each number that is greater than 9
    digits = [d - 9 if d > 9 else d for d in digits]
    return sum(digits)