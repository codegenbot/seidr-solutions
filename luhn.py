def luhn(card_num):
    card_num = [int(x) for x in str(card_num)[1:-1].split()]
    card_num = card_num[::-1]
    total = 0
    for i, n in enumerate(card_num):
        if i % 2 == 1:
            n *= 2
            if n > 9:
                n -= 9
        total += n
    return total