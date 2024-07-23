def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    odd_indexed_digits_sum = 0
    for i, digit in enumerate(card_number):
        if (i % 2 == 1):
            doubled_digit = digit * 2
            if doubled_digit > 9:
                doubled_digit -= 9
            odd_indexed_digits_sum += doubled_digit
        else:
            odd_indexed_digits_sum += digit

    return odd_indexed_digits_sum