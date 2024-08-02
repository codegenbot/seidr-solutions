def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    for i in range(15, -1, -2):
        if card_number[i] * 2 > 9:
            sum += card_number[i] * 2 - 9
        else:
            sum += card_number[i] * 2
    return sum + card_number[15]