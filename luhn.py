def luhn(card_number):
    card_number = list(map(int, card_number.split()))
    total = 0
    for i in range(15):
        if (i) % 2 != 0:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        total += card_number[i]
    return str(total)