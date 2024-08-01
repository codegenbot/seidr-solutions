Here is the Python solution for the problem:

```
def luhn(card):
    card = [int(x) for x in card.split()]
    total = 0
    for i in range(len(card)):
        if i % 2 == 1:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        total += card[i]
    return total