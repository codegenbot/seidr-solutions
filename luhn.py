def luhn(card_num):
    total = 0
    for i in range(15, -1, -1):
        num = int(card_num[i])
        if (i) % 2 != 0:
            num *= 2
            if num > 9:
                num -= 9
        total += num
    return total