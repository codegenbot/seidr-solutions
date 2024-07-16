def luhn(card_number):
    card_number = [int(i) for i in str(card_number)]
    total_sum = sum([int(i) for i in str(card_number)])
    new_total_sum = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        new_total_sum += card_number[i]
    return new_total_sum - total_sum if total_sum % 10 != 0 else "Card number is valid"