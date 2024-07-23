```
def luhn(card):
    card = [int(x) for x in str(card)]
    card.reverse()
    sum = 0
    for i, num in enumerate(card):
        if i % 2 == 1:
            double = num * 2
            sum += 9 if double > 9 else double
        else:
            sum += num
    return sum % 10 == 0