def luhn(card):
    card = list(map(int, ''.join(filter(str.isdigit, str(card).replace(" ", ""))).replace('0', ''))) + [0] * 3
    return sum([x if i % 2 == 0 else (x * 2) % 10 + ((x * 2) // 10) for i, x in enumerate(reversed(card))])