```
def luhn(card_number):
    card_number = list(map(int, card_number))
    result = 0
    for i, x in enumerate(card_number):
        if i % 2 == 0:
            result += x
        else:
            doubled = x * 2
            if doubled > 9:
                doubled -= 9
            result += doubled
    return str(result)