def luhn(card):
    card = [int(i) for i in str(card)]
    result = sum([x if i % 2 != 0 else (x * 2) % 10 - (x * 2) // 9 >= 5 else (x * 2) % 9 for i, x in enumerate(card)])
    return result