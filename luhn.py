def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    total = 0
    for i, num in enumerate(card_number):
        if i % 2 == 0:
            total += num
        else:
            doubled = num * 2
            if doubled > 9:
                total += doubled - 9
            else:
                total += doubled
    return str(total).lstrip("0")