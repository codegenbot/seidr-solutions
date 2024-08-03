Here is the solution to the problem:

```
def luhn(card_number):
    card_number = [int(x) for x in card_number.split()]
    sum_digits = 0
    for i in range(len(card_number)):
        digit = card_number[i]
        if (i % 2 == 1):
            digit *= 2
            if digit > 9:
                digit -= 9
        sum_digits += digit
    return sum_digits