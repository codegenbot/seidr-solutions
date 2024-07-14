```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum_digits = 0
    is_even = False
    for i, digit in enumerate(card_number):
        digit_value = digit if not is_even else digit * 2
        if digit_value > 9:
            digit_value -= 9
        sum_digits += digit_value
        is_even = not is_even
    return str(sum_digits)