def luhn(card):
    card = [int(x) for x in str(card)]
    doubled = [(card[i] * 2) if i % 2 else card[i] for i in range(len(card))]
    return sum([x // 10 + x % 10 for x in doubled])