```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total_sum = 0
    is_double = False
    for digit in reversed(card_number):
        if is_double:
            if digit * 2 > 9:
                total_sum += (digit * 2) - 9
            else:
                total_sum += digit * 2
        else:
            total_sum += digit
        is_double = not is_double
    return str(total_sum)