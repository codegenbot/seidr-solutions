```
def luhn(card):
    sum = 0
    for i in range(len(card)):
        digit = int(card[i])
        if i % 2 == 0:
            digit *= 1
        else:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum += digit
    return sum