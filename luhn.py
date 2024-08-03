def luhn(card_num):
    card_num = list(map(int, card_num))
    check_sum = 0
    for i in range(len(card_num)):
        if i % 2 == 1:
            temp = card_num[i] * 2
            if temp > 9:
                temp -= 9
            check_sum += temp
        else:
            check_sum += card_num[i]
    return str(check_sum)