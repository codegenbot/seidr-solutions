def luhn_sum(card):
    card = [int(x) for x in str(card)]
    new_card = []
    for i, num in enumerate(card):
        if (i % 2) == 0:
            new_card.append(num)
        else:
            new_card.append(num * 2)
            if new_card[-1] > 9:
                new_card[-1] -= 9
    return sum(new_card)