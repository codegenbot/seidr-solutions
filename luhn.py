def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    new_card_number = []
    for i in range(len(card_number)):
        if (i % 2) == 1:
            doubled = card_number[i] * 2
            if doubled > 9:
                doubled -= 9
            new_card_number.append(doubled)
        else:
            new_card_number.append(card_number[i])
    return sum(new_card_number)