def luhn(card):
    card = list(map(int, card))
    result = 0
    for i in range(len(card) - 1):
        if i % 2 == 0:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        result += card[i]
    result += card[-1]
    return str(result)