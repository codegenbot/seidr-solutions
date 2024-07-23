```
def luhn(card):
    card = [int(x) for x in str(card)]
    card.reverse()
    sum = 0
    for i, num in enumerate(card):
        if (i % 2) == 1:
            doubled = num * 2
            if doubled > 9:
                doubled -= 9
            num = doubled
        sum += num
    return sum