def luhn(card_number):
    card_number = list(map(int, card_number.split()))
    result = 0
    for i in range(len(card_number)):
        if (i % 2) == 1:
            double_card_number = card_number[i] * 2
            if double_card_number > 9:
                double_card_number -= 9
        result += card_number[i]
    return str(result)