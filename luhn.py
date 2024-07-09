def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            doubled = card_number[i] * 2
            total += doubled - 9 if doubled > 9 else doubled
        else:
            total += card_number[i]
    return total