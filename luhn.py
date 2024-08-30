def luhn_sum(card_number):
    card_num = [int(x) for x in str(card_number)]
    doubled_sum = 0
    for i in range(15, -1, -2):
        if card_num[i] * 2 > 9:
            doubled_sum += (card_num[i] * 2) - 9
        else:
            doubled_sum += card_num[i] * 2

    sum_odd_digits = sum(card_num[::2])
    return str(doubled_sum + sum_odd_digits)