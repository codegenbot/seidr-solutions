def luhn(card):
    card = list(map(int, card.replace(" ", "")))
    new_card = []
    for i, digit in enumerate(card):
        if i % 2 == 0:
            digit *= 2
            if digit > 9:
                digit -= 9
        new_card.append(digit)
    return sum(new_card)