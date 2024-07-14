def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, digit in enumerate(card_number):
        temp = digit * 2 if i % 2 == 0 else digit
        if temp > 9:
            total += temp - 9
        else:
            total += temp
    return total