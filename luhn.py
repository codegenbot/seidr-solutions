def luhn(card_number):
    card_number = [int(x) for x in card_number.split()]
    total_sum = 0
    is_second = True
    for num in card_number:
        if is_second:
            num *= 2
            if num > 9:
                num -= 9
        is_second = not is_second
        total_sum += num
    return str(total_sum)