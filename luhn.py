def luhn(card):
    card = list(map(int, card.split()))
    double = [card[i] * 2 if i % 2 != 0 else card[i] for i in range(len(card))]
    return sum([x // 10 + x % 10 if x > 9 else x for x in double])