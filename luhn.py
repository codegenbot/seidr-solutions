Here is the completed code:

```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number.reverse()

    sum = 0
    for i, x in enumerate(card_number):
        if i % 2 == 1:
            x *= 2
            if x > 9:
                x -= 9
        sum += x

    return sum