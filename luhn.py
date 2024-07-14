def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number = card_number[::-1]

    sum = 0
    for i in range(len(card_number)):
        if i % 2 == 0:
            sum += card_number[i]
        else:
            double = card_number[i] * 2
            if double > 9:
                double -= 9
            sum += double

    return sum