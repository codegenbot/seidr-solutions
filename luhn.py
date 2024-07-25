def luhn_check(card_num):
    card_num = list(map(int, card_num.split()))
    total_sum = 0
    for i in range(len(card_num)):
        if i % 2 == 1:
            card_num[i] *= 2
            if card_num[i] > 9:
                card_num[i] -= 9
        total_sum += card_num[i]
    return str(total_sum)