def luhn(card_num):
    card_num = [int(x) for x in str(card_num)]
    double_even = False
    sum_digits = 0
    for i, num in enumerate(reversed(card_num)):
        if not double_even and (i % 2 != 0 or len(card_num) == i + 1):
            num *= 2
            if num > 9:
                num -= 9
        sum_digits += num
        double_even = not double_even
    return str(sum_digits)