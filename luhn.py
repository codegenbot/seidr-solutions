Here is the Python solution for the problem:

```
def luhn(card_number):
    sum = 0
    for i in range(15,-1,-1):
        if i % 2 == 1:
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        sum += card_number[i]
    return sum