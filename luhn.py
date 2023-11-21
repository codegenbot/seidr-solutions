def luhn_algorithm(digits):
    new_digits = []
    for i in range(len(digits)-1, -1, -1):
        if (len(digits)-i) % 2 == 0:
            new_digit = digits[i] * 2
            if new_digit > 9:
                new_digit -= 9
            new_digits.append(new_digit)
        else:
            new_digits.append(digits[i])
    return 10 - (sum(new_digits) % 10)