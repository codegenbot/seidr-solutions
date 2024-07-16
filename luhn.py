def luhn(card_number):
    card_number = list(map(int, card_number[1:]))
    for i in range(len(card_number)):
        if (i % 2) == 0:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
    return sum(card_number)