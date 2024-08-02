def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    checksum = 0
    for i in range(len(card_number) - 1, -1, -1):
        if (len(card_number) - i) % 2 == 1:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        checksum += card_number[i]
    return checksum