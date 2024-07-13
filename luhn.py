def luhn(card):
    card = [int(x) for x in card.replace(' ', '')]
    new_card = []
    for i, digit in enumerate(card):
        if i % 2 == 1:
            doubled_digit = digit * 2
            new_card.append(doubled_digit - 9) if doubled_digit > 9 else new_card.append(doubled_digit)
        else:
            new_card.append(digit)
    return sum(new_card)