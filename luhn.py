def luhn_algorithm(card_number):
    total = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            card_number[i] = str(int(card_number[i]) * 2)
            if len(card_number[i]) > 1:
                card_number[i] = str(int(card_number[i]) - 9)
        total += int(card_number[i])
    return total