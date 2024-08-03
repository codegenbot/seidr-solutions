```
def luhn(card):
    card = [int(x) for x in str(card).split()]
    total = 0
    for i in range(len(card)):
        if (i % 2 == 1):
            double_card = card[i] * 2
            if double_card > 9:
                double_card -= 9
        else:
            double_card = card[i]
        total += double_card
    return total