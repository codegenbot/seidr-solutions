def luhn(card):
    card = [int(x) for x in card.split()]
    new_card = []
    for i, num in enumerate(card):
        if i % 2 == 0:
            new_card.append(num)
        else:
            new_card.append(2 * num)
    for num in new_card:
        if num > 9:
            new_card[card.index(num)] = num - 9
    return sum(new_card)