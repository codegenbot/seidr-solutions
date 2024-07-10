def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    double_even = False
    total = 0

    for i in range(len(card_number)):
        if (i % 2) == 1:
            double_even = True
        else:
            double_even = False

        if double_even:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9

    return sum(card_number)