def luhn(card_number):
    card_num = [int(x) for x in str(card_number)]
    total = 0
    for i in range(len(card_num)):
        if i % 2 == 1:
            card_num[i] *= 2
            if card_num[i] > 9:
                card_num[i] -= 9
        total += card_num[i]
    return total