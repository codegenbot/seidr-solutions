def luhn_check(card_number):
    card_number = list(map(int, card_number))
    sum = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            double_card = card_number[i] * 2
            if double_card > 9:
                double_card -= 9
            sum += double_card
        else:
            sum += card_number[i]
    return sum