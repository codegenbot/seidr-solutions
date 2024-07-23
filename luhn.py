def luhn(card_number):
    card_number = card_number[:]
    total = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            x = card_number[i] * 2
            if x > 9:
                total += x - 9
            else:
                total += x
        else:
            total += card_number[i]
    return total