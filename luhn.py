def luhn(card_num):
    total = 0
    for i in range(len(card_num) - 1, -1, -1):
        if i % 2 == 0:
            card_num[i] *= 2
            if card_num[i] > 9:
                card_num[i] -= 9
        total += int(card_num[i])
    return total