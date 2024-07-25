def luhn(card_number):
    card_number = [int(i) for i in str(card_number)]
    total = 0
    for i in range(1, len(card_number)):
        if i % 2 == 0:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        total += card_number[i]
    return total