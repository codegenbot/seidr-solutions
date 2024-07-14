```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    is_second = False
    for i, digit in enumerate(card_number[:-1]):
        if is_second:
            digit *= 2
            if digit > 9:
                digit -= 9
        is_second = not is_second
        total += digit
    last_digit = card_number[-1]
    if len(card_number) % 2 != 0 and is_second:
        last_digit *= 2
        if last_digit > 9:
            last_digit -= 9
    total += last_digit
    return total