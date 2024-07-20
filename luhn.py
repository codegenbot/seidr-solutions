def luhn(card):
    card = list(map(int, ''.join(filter(str.isdigit, str(card).replace(" ", "")))))
    for i in range(len(card)-1, 0, -2):
        if card[i] * 2 > 9:
            card[i] = (card[i] * 2) % 10 + ((card[i] * 2) // 10)
        else:
            card[i] *= 2
    return sum(card)