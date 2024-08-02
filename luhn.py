def luhn(card_num):
    card_num = [int(x) for x in str(card_num).split()]
    total_sum = 0
    for i, num in enumerate(card_num):
        if (i % 2) == 1:
            num *= 2
            if num > 9:
                num -= 9
        total_sum += num
    return total_sum