def luhn(card_num):
    card_num = [int(x) for x in card_num[1:]]
    total = 0
    is_second = True
    for num in card_num:
        if is_second:
            num *= 2
            if num > 9:
                num -= 9
        is_second = not is_second
        total += num
    return str(total)