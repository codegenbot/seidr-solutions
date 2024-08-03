def luhn(card_number):
    card_number = list(map(int, card_number))
    sum_of_digits = 0
    is_second = True

    for i in range(len(card_number)):
        if is_second:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        is_second = not is_second

    return sum(card_number)