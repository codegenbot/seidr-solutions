def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    double_odd = [
        (card_number[i] * 2) if i % 2 else card_number[i]
        for i in range(len(card_number))
    ]
    return sum([x - 9 if x > 9 else x for x in double_odd])