def luhn(card_number):
    card_number = list(map(int, card_number))
    double = False
    result = 0
    for i in range(len(card_number) - 1, -1, -1):
        if double:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        double = not double
        result += card_number[i]
    return result