```Python
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    is_second = False
    for i, num in enumerate(card_number):
        if is_second:
            doubled = num * 2
            if doubled > 9:
                total += doubled - 9
            else:
                total += doubled
            is_second = False
        else:
            total += num
            is_second = True
    return total