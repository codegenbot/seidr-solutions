def luhn(card):
    return str(sum((int(i) * 2 if i != '0' and (int(i) * 2) % 10 != int(i) else int(i)) for i in card[::-1]).sum() % 10)