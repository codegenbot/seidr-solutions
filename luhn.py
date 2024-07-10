def luhn(card_num):
    card_num = [int(x) for x in str(card_num)[1:-1].split()]
    new_sum = 0
    for i, num in enumerate(reversed(card_num)):
        if i % 2 == 0:
            num *= 2
            if num > 9:
                num -= 9
        new_sum += num
    return str(new_sum)