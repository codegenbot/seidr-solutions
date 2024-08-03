def luhn(card_num):
    card_num = list(map(int, card_num[1:]))
    double_alt = False
    sum = 0
    for i in range(len(card_num)):
        if double_alt:
            card_num[i] *= 2
            if card_num[i] > 9:
                card_num[i] -= 9
        double_alt = not double_alt
        sum += card_num[i]
    return str(sum)