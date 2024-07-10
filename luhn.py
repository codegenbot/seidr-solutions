def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    doubled = False
    total_sum = 0
    for i in range(len(card_number)):
        if doubled:
            if card_number[i] * 2 >= 10:
                total_sum += (card_number[i] * 2 - 9)
            else:
                total_sum += card_number[i] * 2
            doubled = False
        elif i % 2 != 0:
            card_number[i] *= 2
            doubled = True
        else:
            total_sum += card_number[i]
    return total_sum