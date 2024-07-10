def luhn(card_num):
    card_num = list(map(int, str(card_num)))
    sum_of_digits = 0
    for i in range(len(card_num)):
        if (i % 2) == 1:
            card_num[i] *= 2
            if card_num[i] > 9:
                card_num[i] -= 9
        sum_of_digits += card_num[i]
    return sum_of_digits