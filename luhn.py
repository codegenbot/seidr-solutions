def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    double_even = False
    total = 0
    for i in card_number:
        if double_even:
            i *= 2
            if i > 9:
                i -= 9
        double_even = not double_even
        total += i
    return total