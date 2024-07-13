def luhn(card_number):
    card_number = list(map(int, card_number))
    sum_check = 0
    for i in range(0, len(card_number), 2):
        double_card = card_number[i] * 2
        if double_card > 9:
            double_card -= 9
        sum_check += double_card
    return sum_check + sum(card_number[1::2])