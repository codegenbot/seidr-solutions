def luhn(card):
    card = [int(x) for x in str(card)]
    total = 0
    for i in range(len(card)):
        if i % 2 == 1:
            double_card = card[i] * 2
            if double_card > 9:
                double_card -= 9
            total += double_card
        else:
            total += card[i]
    return total