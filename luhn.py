def luhn_algorithm(digits):
    digits = [int(d) for d in digits]  # Convert input to array of integers
    sum = 0
    for i, digit in enumerate(digits):
        if i % 2 == 0:
            digit *= 2
            if digit > 9:
                sum += digit - 10 if digit > 18 else digit - 9
        else:
            sum += digit
    return "".join(str(digit) for digit in digits[::-1])