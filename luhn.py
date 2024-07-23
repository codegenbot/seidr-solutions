```
def luhn(card_number):
    card_number = list(map(int, card_number.replace(" ", "")))
    total = 0
    for i in range(len(card_number)):
        if (i % 2) == 1:
            doubled = card_number[i] * 2
            if doubled > 9:
                doubled -= 9
            total += doubled
        else:
            total += card_number[i]
    return total