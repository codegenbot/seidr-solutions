def luhn(card):
    card = [int(x) for x in str(card).replace(" ", "") if x.isdigit()]
    if len(card) < 15:
        return sum(card)
    card += [0] * (16 - len(card))
    total = 0
    for i, n in enumerate(card):
        if i % 2 == 1 and n > 4: 
            total += n * 2 - 9
        else:
            total += n
    return total