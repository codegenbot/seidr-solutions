def luhn_algorithm(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    for i in range(len(card_number)):
        if (i + 1) % 2 == 0:
            digit = card_number[i] * 2
            if digit > 9:
                digit -= 9
            card_number[i] = digit
        sum += card_number[i]
    return sum