Here is the solution to the problem:

```
def luhn(card):
    sum = 0
    for i in range(len(card) - 1):
        digit = int(card[i])
        if (i) % 2 != 0:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum += digit
    return sum