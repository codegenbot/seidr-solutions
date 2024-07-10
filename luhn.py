def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    card_number = card_number[::-1]

    new_card_number = []
    for i, num in enumerate(card_number):
        if i % 2 == 0:
            new_card_number.append(num)
        else:
            doubled_num = num * 2
            if doubled_num > 9:
                doubled_num -= 9
            new_card_number.append(doubled_num)

    return sum(new_card_number)