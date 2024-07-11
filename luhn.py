```
def luhn(card):
    card = [int(i) for i in str(card)]
    result = 0
    for i, x in enumerate(card):
        if i % 2 != 0:
            y = x
        else:
            y = x * 2
            if y > 9:
                y -= 9
        result += y
    return result