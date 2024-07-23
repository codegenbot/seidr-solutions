def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            if card_number[i] * 2 > 9:
                total += card_number[i] * 2 - 9
            else:
                total += card_number[i] * 2
        else:
            total += card_number[i]
    return total