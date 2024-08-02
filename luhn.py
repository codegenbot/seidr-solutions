def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    double_even = False
    sum_of_digits = 0
    for i in range(len(card_number)):
        if double_even:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        double_even = not double_even
    return sum(card_number)