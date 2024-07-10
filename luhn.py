```
def luhn(card):
    card = [int(x) for x in str(card)[1:-1].split()]
    sum = 0
    for n in card:
        if len(card) % 2 == 1 and card.index(n) % 2 != 0:
            n *= 2
            if n > 9:
                n -= 9
        sum += n
    return sum