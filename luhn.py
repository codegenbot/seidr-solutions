def luhn(card):
    card = [int(i) for i in str(card)]
    result = 0
    for i, x in enumerate(card):
        if i % 2 == 1:
            x *= 2
            if x > 9:
                x -= 9
        result += x
    return result