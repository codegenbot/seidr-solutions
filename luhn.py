```
def luhn(card):
    sum = 0
    for i in range(len(card)-1):
        num = int(card[i])
        if (i) % 2 == 0:
            num *= 2
            if num > 9:
                num -= 9
        sum += num
    return sum