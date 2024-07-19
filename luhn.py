```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:-1].split()]
    total = 0
    for i, num in enumerate(reversed(card_number)):
        if (i % 2 == 0):
            num *= 2
            if num > 9:
                num -= 9
        total += num
    return total