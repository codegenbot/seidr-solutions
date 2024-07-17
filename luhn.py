```
def luhn(card_number):
    total = 0
    for i in range(15):
        if (i % 2) == 1:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        total += card_number[i]
    return total