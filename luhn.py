def luhn(card):
    card = [int(i) for i in card.split()]
    sum_check = 0
    for i in range(len(card)):
        if i % 2 == 1:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        sum_check += card[i]
    return sum_check