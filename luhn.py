def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total_sum = 0
    is_second = True
    for i in range(len(card_number)):
        if is_second:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        is_second = not is_second
        total_sum += card_number[i]
    return total_sum