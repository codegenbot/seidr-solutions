```
def luhn(card_num):
    card_num = [int(i) for i in str(card_num).split()]
    total_sum = 0
    is_second = False
    for digit in card_num:
        if is_second:
            digit *= 2
            if digit > 9:
                digit -= 9
        is_second = not is_second
        total_sum += digit
    return total_sum