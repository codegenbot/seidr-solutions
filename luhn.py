def luhn(card):
    return str(sum((int(d) * 2 if i % 2 != 0 else int(d)) if (int(d) * 2) > 9 else (int(d) * 2 - 9) for i, d in enumerate(str(card)) if d.isdigit()) % 10)