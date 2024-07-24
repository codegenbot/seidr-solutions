def luhn(card_number):
    card_number = [int(i) for i in str(card_number)]
    sum = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            double = card_number[i] * 2
            if double > 9:
                sum += double - 9
            else:
                sum += double
        else:
            sum += card_number[i]
    return sum