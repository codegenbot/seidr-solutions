def luhn(card_number):
    card_number = list(map(int, card_number))
    sum_ = 0
    for i in range(len(card_number) - 1):
        if i % 2 == 0:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        sum_ += card_number[i]
    if len(card_number) % 2 != 0:
        sum_ += card_number[-1]
    return str(sum_)