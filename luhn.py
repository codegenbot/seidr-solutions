def luhn(card_num):
    card_num = list(map(int, card_num[1:]))
    for i in range(len(card_num)):
        if i % 2 == 0:
            card_num[i] *= 2
            if card_num[i] > 9:
                card_num[i] -= 9
    return sum(card_num)