def luhn(card_number):
    card_number = list(map(int, card_number.split()))
    card_number.reverse()
    total = 0
    for i in range(0, len(card_number)):
        if (i % 2) != 0:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        total += card_number[i]
    return str(total)