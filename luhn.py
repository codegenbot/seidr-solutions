def luhn(card):
    card = [int(x) for x in card.replace(' ', '')]
    new_card = []
    for i, digit in enumerate(card):
        if i % 2 == 0:
            new_card.append(digit)
        else:
            digit *= 2
            if digit >= 10:
                digit -= 9
            new_card.append(digit)
    return sum(new_card)