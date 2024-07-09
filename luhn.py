def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total_odd = 0
    total_even = 0
    for i, num in enumerate(card_number):
        if (i % 2) == 1:
            doubled = num * 2
            if doubled > 9:
                total_odd += doubled - 9
            else:
                total_odd += doubled
        else:
            total_even += num
    return total_odd + total_even