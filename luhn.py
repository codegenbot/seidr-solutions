```
def luhn(card_num):
    total = 0
    for i, n in enumerate(card_num[::-1]):
        if i % 2 == 0:
            n *= 1
        else:
            n *= 2
            if n > 9:
                n -= 9
        total += n
    return total