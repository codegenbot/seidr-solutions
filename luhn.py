def luhn(card_number):
    card_number = [int(x) for x in card_number.split()]
    card_number.reverse()
    total = 0
    is_second = True
    for i in card_number:
        if is_second:
            i *= 2
            if i > 9:
                i -= 9
        is_second = not is_second
        total += i
    return total