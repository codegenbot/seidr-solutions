def luhn(card):
    card = list(map(int, card.replace(" ", "")))
    return str(sum(((card[i] * 2) if i % 2 != 0 else card[i]) - 9 if (card[i] * 2) > 9 else (card[i] * 2) for i in range(len(card))) % 10)