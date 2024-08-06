def luhn(card_number):
    card_number = [int(i) for i in str(card_number)[1:]]
    total_sum = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        total_sum += card_number[i]
    return str(total_sum)