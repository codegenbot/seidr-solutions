def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number.reverse()
    
    for i, num in enumerate(card_number):
        if (i % 2 == 1):
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
    
    return sum(card_number) % 10 == 0