def luhn(card):
    return str(sum((int(i) * 2 if int(i) % 2 != 0 else int(i)) if (int(i) * 2) > 9 else (int(i) * 2 - 9) for i in card) % 10)