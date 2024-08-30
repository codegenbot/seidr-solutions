def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    double_every_other = [i * 2 if i % 2 == 0 else i for i in card_number[1:]]
    results_over_9 = [i - 9 if i > 9 else i for i in double_every_other]
    return sum(results_over_9)