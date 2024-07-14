def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number.reverse()
    total_sum = 0
    for i, n in enumerate(card_number):
        if i % 2 == 1:
            n *= 2
            if n > 9:
                n -= 9
        total_sum += n
    return total_sum