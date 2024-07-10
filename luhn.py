def luhn(card):
    card = [int(x) for x in card.split()]
    new_card = []
    for i, num in enumerate(card):
        if i % 2 == 1:
            num *= 2
            if num > 9:
                num -= 9
        new_card.append(num)
    return sum(new_card)