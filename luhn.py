```
def luhn(card):
    card = [int(x) for x in card[1:]]
    card = [x * 2 if i % 2 else x for i, x in enumerate(card)]
    return sum([10 if x > 9 else x for x in card]) % 10