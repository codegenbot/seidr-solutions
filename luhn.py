Here is the Python solution for the Luhn's algorithm problem:

```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number).split()]
    new_sum = 0
    for i, digit in enumerate(card_number):
        if (i % 2 == 1):
            digit *= 2
            if digit > 9:
                digit -= 9
        new_sum += digit
    return new_sum