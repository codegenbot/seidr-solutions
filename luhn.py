def luhn(card_number):
    total = 0
    for i in range(len(card_number)):
        if i % 2 == 0:
            total += int(card_number[i])
        else:
            doubled = int(card_number[i]) * 2
            if doubled > 9:
                total += doubled - 9
            else:
                total += doubled
    return total