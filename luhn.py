```
def luhn(card):
    total = 0
    for i, num in enumerate(map(int, card)):
        if (i % 2) == 1:
            num *= 2
            if num > 9:
                num -= 9
        total += num
    return total