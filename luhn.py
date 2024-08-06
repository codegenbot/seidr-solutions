def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:-1].split()]
    sum = 0
    for i, num in enumerate(card_number):
        if i % 2 == 0:
            sum += num
        else:
            doubled = num * 2
            if doubled > 9:
                sum += doubled - 9
            else:
                sum += doubled
    return sum