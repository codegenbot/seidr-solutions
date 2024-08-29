def luhn(card):
    card = [int(x) for x in str(card)]
    sum = 0
    for i in range(len(card)):
        if i % 2 == 1:
            double = card[i] * 2
            if double > 9:
                double -= 9
            sum += double
        else:
            sum += card[i]
    return sum