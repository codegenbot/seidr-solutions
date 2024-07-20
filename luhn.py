def luhn(card):
    card = list(map(int, str(card).replace(" ", "")))
    card = card[::-1]  
    return sum([x if i % 2 == 0 else (x * 2) % 10 + ((x * 2 >= 9) or (x * 2 < 9)) for i, x in enumerate(card)])