def luhn(card):
    card = [int(x) for x in str(card)]
    new_card = []
    for i, digit in enumerate(card):
        if i % 2 == 0:
            digit *= 2
            if digit > 9:
                digit -= 9
        new_card.append(digit)
    return sum(new_card)