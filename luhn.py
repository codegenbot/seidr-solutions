def luhn(card):
    card = [int(i) for i in str(card)]
    result = sum([x if i % 2 == 0 else 2*x if x*2 > 9 else 2*x for i, x in enumerate(card)])
    return str(result)