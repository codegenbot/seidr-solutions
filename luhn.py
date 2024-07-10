def luhn(card):
    card = [int(i) for i in str(card)]
    result = sum([card[i-1] if i % 2 != 0 else card[i-1] * 2 - (card[i-1] * 2 // 10) * 9 for i in range(1, len(card))])
    return str(result)