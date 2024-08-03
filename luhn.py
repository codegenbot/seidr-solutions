def luhn(card_number):
    card_number = [int(x) for x in str(card_number).split()]
    new_card_number = []
    for i, num in enumerate(card_number):
        if i % 2 != 0:
            double_num = num * 2
            if double_num > 9:
                double_num -= 9
            new_card_number.append(double_num)
        else:
            new_card_number.append(num)
    return sum(new_card_number)