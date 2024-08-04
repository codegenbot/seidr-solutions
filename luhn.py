def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    new_card_number = []

    for i in range(len(card_number)):
        if i % 2 == 0:
            new_card_number.append(card_number[i])
        else:
            doubled = card_number[i] * 2
            if doubled > 9:
                new_card_number.append(doubled - 9)
            else:
                new_card_number.append(doubled)

    return sum(new_card_number)