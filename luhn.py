def luhn(card_number):
    card_number = [int(x) for x in str(card_number).split()]
    new_card_number = []
    for i, num in enumerate(card_number):
        if i % 2 == 0:
            new_num = num
        else:
            new_num = num * 2
            if new_num > 9:
                new_num -= 9
        new_card_number.append(new_num)
    return sum(new_card_number)