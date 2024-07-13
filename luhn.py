def luhn(card):
    card = [int(x) for x in card.replace(' ', '')]
    new_card = []
    for i, digit in enumerate(card):
        if (i % 2 == 1 and digit * 2 >= 10):
            new_card.append((digit * 2) % 10)
        elif i % 2 == 1:
            new_card.append(digit * 2)
        else:
            new_card.append(digit)
    return sum(new_card)