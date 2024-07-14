def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    is_second = False
    for i, digit in enumerate(reversed(card_number)):
        if i % 2 == 1:
            is_second = not is_second
        if is_second:
            doubled_digit = (digit * 2)
            if doubled_digit > 9:
                doubled_digit -= 9
        total += doubled_digit if is_second else digit
    return sum(reversed([str(total)]))