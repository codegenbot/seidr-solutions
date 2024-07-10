```
def luhn(card):
    card = [int(i) for i in str(card)]
    if len(card) != 16:
        return
    result = sum([x if i % 2 == 0 else (x * 2) % 10 if (x * 2) % 10 <= 9 else ((x * 2) // 10) + ((x * 2) % 10) for i, x in enumerate(card)])
    return result