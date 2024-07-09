def luhn(card_num):
    card_num = [int(x) for x in card_num.split()]
    total = 0
    for i, num in enumerate(card_num):
        if (i + 1) % 2 == 0:  
            num *= 2
            if num > 9:
                num -= 9
        total += num
    return str(total)