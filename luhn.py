```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, num in enumerate(reversed(card_number)):
        if i % 2 != 0:
            doubled = num * 2
            if doubled > 9:
                total += doubled - 9
            else:
                total += doubled
        else:
            total += num
    return total