def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    new_card = []
    for i, num in enumerate(card_number):
        if i % 2 == 1:
            double_num = num * 2
            if double_num > 9:
                double_num -= 9
            new_card.append(double_num)
        else:
            new_card.append(num)
    return sum(new_card)