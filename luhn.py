def luhn(card):
    card = list(map(int, card.split()))
    result = sum((card[i] * 2) if i % 2 != 0 else card[i] for i in range(len(card))) - sum(i//10 and 9 or i for i in (i if (i := i // 2) > 9 else i) for i in (i * 2) if i % 2 != 0 else i for i in card)
    return str(result)