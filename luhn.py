```
def luhn(card):
    card = ''.join(filter(str.isdigit, str(card))).lstrip().replace(" ", "")
    card = list(map(int, card + '0' * (16 - len(card))))
    for i in range(len(card)-1, 0, -2):
        if card[i] * 2 > 9:
            card[i] = (card[i] * 2) % 10 + ((card[i] * 2) // 10)
        else:
            card[i] *= 2
    return sum(card)