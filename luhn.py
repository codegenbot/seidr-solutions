def luhn(card_number):
    card_number = list(map(int, card_number))
    new_card_number = []
    for i in range(len(card_number)):
        if i % 2 == 0:
            new_card_number.append(card_number[i])
        else:
            new_card_number.append(card_number[i] * 2)
            if new_card_number[-1] > 9:
                new_card_number[-1] -= 9
    return sum(new_card_number)