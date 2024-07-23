```python
def luhn(card):
    card = [int(x) for x in str(card)]
    card.reverse()
    sum = 0
    doubled = False
    for i, num in enumerate(card):
        if doubled:
            if num * 2 > 9:
                sum += num * 2 - 9
            else:
                sum += num * 2
            doubled = False
        else:
            sum += num
            doubled = not doubled
    return sum