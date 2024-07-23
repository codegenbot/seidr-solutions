def luhn(card_num):
    card_num = [int(x) for x in str(card_num)]
    sum = 0
    for i in range(len(card_num)):
        if i % 2 == 1:
            card_num[i] *= 2
            if card_num[i] > 9:
                card_num[i] -= 9
        sum += card_num[i]
    return sum