def luhn(card):
    s = sum(int(d) * 2 if i % 2 else int(d) for i, d in enumerate(str(card)))
    return s - (s // 10) * 9