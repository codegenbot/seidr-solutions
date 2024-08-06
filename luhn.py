def luhn(card):
    card = [int(x) for x in str(card)]
    total = 0
    is_second = True
    for i in range(len(card)):
        if is_second:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        is_second = not is_second
    return sum(card)