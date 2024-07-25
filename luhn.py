def luhn(card_number):
    card_number = list(map(int, card_number))
    sum = 0
    double = False
    for i in range(len(card_number)):
        if double:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        double = not double
        sum += card_number[i]
    return sum