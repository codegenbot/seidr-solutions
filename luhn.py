def luhn(card_num):
    total = 0
    for i, num in enumerate(map(int, card_num)):
        if (i % 2) == 1:
            num *= 2
            if num > 9:
                num -= 9
        total += num
    return str(total)