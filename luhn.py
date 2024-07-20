def luhn(card_number):
    card_number = [int(x) for x in str(card_number).split()]
    new_card_number = []
    for i, num in enumerate(card_number):
        if i % 2 == 0:
            new_card_number.append(num)
        else:
            temp_sum = num * 2
            if temp_sum > 9:
                temp_sum -= 9
            new_card_number.append(temp_sum)
    return sum(new_card_number)