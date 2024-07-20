def luhn(card):
    card = list(map(int, ''.join(filter(str.isdigit, str(card).replace(" ", ""))).replace('0', '')))
    if len(card) < 15:
        return sum(card)
    card += [0] * (16 - len(card))
    for i in range(len(card)-1, 0, -2):
        if card[i-1] == 0 and i != len(card)-1:
            continue
        if card[i] * 2 > 9:
            card[i] = (card[i] * 2) % 10 + ((card[i] * 2) // 10)
        else:
            card[i] *= 2
    return sum(card)