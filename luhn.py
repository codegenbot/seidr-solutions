```
def luhn(card):
    card = [int(i) for i in str(card)]
    return sum([x if i % 2 == 0 else (x * 2) % 10 - 9 if (x * 2) > 9 else x*2 for i, x in enumerate(card)])