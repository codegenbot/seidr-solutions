```
def luhn(card):
    total = 0
    for i, num in enumerate(map(int, card)):
        if (i % 2 == 1):
            doubled = num * 2
            if doubled > 9:
                doubled -= 9
        else:
            doubled = num
        total += doubled
    return total