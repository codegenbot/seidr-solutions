def luhn(card_number):
    card_number = list(map(int, card_number.split()))
    total = 0
    for i in range(15, -1, -2):
        if card_number[i] * 2 > 9:
            total += (card_number[i] * 2) - 9
        else:
            total += card_number[i] * 2
    for i in range(14, -1, -1):
        if i % 2 != 0:
            total += card_number[i]
    return str(total)