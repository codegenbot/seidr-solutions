```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total_sum = 0
    is_second = True
    for num in card_number:
        if is_second:
            num *= 2
            if num > 9:
                num -= 9
        total_sum += num
        is_second = not is_second
    return total_sum