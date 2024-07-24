def luhn(card):
    card = list(map(int, str(card)))
    total = 0
    for i in range(len(card) - 1, -1, -1):
        if i % 2 == 1:
            card[i] *= 2
            card[i] -= card[i] // 10 * 9
        total += card[i]
    return total