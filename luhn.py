def luhn_check(card_num):
    card_num = [int(i) for i in str(card_num)]
    card_num = card_num[:16]
    sum_check = 0
    check_sum = 0
    count_double = False

    for i in range(0, len(card_num)):
        if count_double:
            val = 2 * card_num[i]
            if val > 9:
                val = val - 9

            sum_check += val
        else:
            sum_check += card_num[i]

        count_double = not count_double

    return str(sum_check)