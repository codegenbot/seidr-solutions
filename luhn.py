def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    odd_sum = 0
    even_sum = 0
    is_odd = True
    for i in range(len(card_number)):
        if is_odd:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
            even_sum += card_number[i]
        else:
            odd_sum += card_number[i]
        is_odd = not is_odd
    return odd_sum + even_sum