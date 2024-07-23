def luhn(card_number):
    card_number = list(map(int, card_number.split()))
    new_card_number = []

    for i in range(len(card_number)):
        if (i % 2) == 1:
            new_card_number.append(2 * card_number[i])
        else:
            new_card_number.append(card_number[i])

    for i in range(len(new_card_number)):
        if new_card_number[i] > 9:
            new_card_number[i] = new_card_number[i] - 9

    return sum(new_card_number)