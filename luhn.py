def luhn(card_number):
    card_number = [int(x) for x in card_number]
    card_number.reverse()
    total_sum = 0
    is_second = True
    for num in card_number:
        if is_second:
            num *= 2
            if num > 9:
                num -= 9
        total_sum += num
        is_second = not is_second
    return str(total_sum)