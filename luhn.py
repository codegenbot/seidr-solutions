def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    odd_sum = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        odd_sum += card_number[i]
    return odd_sum