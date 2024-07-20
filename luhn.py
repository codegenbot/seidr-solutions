```Python
def luhn(card):
    card = list(map(int, ''.join(filter(str.isdigit, ' '.join(str(x) for x in str(card).replace(" ", ""))).split()))
    if len(card) < 15:
        return sum(card)
    card += [0] * (16 - len(card))
    for i in range(len(card)-1, 0, -2):
        if card[i] * 2 > 9:
            card[i] = (card[i] * 2) % 10 + ((card[i] * 2) // 10)
        else:
            card[i] *= 2
    return sum(card)