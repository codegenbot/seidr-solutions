def luhn(card):
    card = [int(x) for x in str(card)]
    new_sum = 0
    is_second = True
    for num in card:
        if is_second:
            num *= 2
            if num > 9:
                num -= 9
        new_sum += num
        is_second = not is_second
    return new_sum