def luhn(card):
    card = list(map(int, str(card)[1:-1].replace(" ", "")))
    return sum([x if i % 2 == 0 else (x * 2) % 10 + (x * 2 >= 10) for i, x in enumerate(card[::-1])])