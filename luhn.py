def luhn(card):
    s = sum(int(d) * 2 if i % 2 else int(d) for i, d in enumerate(reversed(str(card))))
    return str(s - 9 * (s // 9))