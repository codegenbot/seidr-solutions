```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, num in enumerate(card_number):
        if (i % 2 == 1 and i < len(card_number) - 1) or i % 2 == 0:
            doubled = num * 2
            total += doubled - 9 if doubled > 9 else doubled
        else:
            total += num
    return total