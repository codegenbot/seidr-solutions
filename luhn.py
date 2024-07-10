def luhn(card):
    card = [int(i) for i in str(card)]
    total = 0
    for i, x in enumerate(card):
        if i % 2 == 1:
            total += x * 2
            if total > 9:
                total -= 9
        else:
            total += x
    return total