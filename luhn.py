def luhn(card_num):
    card_num = [int(x) for x in str(card_num)]
    new_card_num = []
    for i, num in enumerate(card_num):
        if i % 2 == 0:
            num *= 2
            if num > 9:
                num -= 9
        new_card_num.append(num)
    return sum(new_card_num)