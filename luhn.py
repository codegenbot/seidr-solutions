def luhn(card_number):
    card_number = list(map(int, card_number))
    new_card_number = []
    for i in range(len(card_number)):
        if i % 2 == 0:
            new_card_number.append(card_number[i])
        else:
            doubled_digit = card_number[i] * 2
            if doubled_digit > 9:
                doubled_digit -= 9
            new_card_number.append(doubled_digit)
    return sum(new_card_number)