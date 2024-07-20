def luhn(card):
    card = [int(x) if i > 0 or x != '0' else 0 for i, x in enumerate(str(card).replace(" ", ""))]
    if len(card) < 15:
        return sum(card)
    card += [0] * (16 - len(card))
    for i in range(len(card)-1, 0, -2):
        temp = card[i] * 2
        card[i] = temp - (temp // 10) * 10 if temp > 9 else temp
    return sum(card)