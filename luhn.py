def luhn(card_num):
    card_num = [int(i) for i in str(card_num).replace(" ", "")]
    res = 0
    for i, v in enumerate(card_num):
        if i % 2 == 1:
            v *= 2
            if v > 9:
                v -= 9
        res += v
    return res