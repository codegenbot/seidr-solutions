```
def luhn(card_num):
    card_num = [int(x) for x in str(card_num)[1:]]
    check_sum = 0
    for i, num in enumerate(card_num):
        if (i % 2) == 0:
            num *= 2
            if num > 9:
                num -= 9
        check_sum += num
    return check_sum