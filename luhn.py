def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i in range(15, -1, -2):
        doubled = card_number[i] * 2
        if doubled > 9:
            doubled -= 9
        total += doubled
    for i in range(14, -1, -2):
        total += card_number[i]
    return str(total)