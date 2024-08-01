Here is the Python solution for the given problem:

```
def luhn(card_num):
    total = 0
    for i, n in enumerate(reversed(str(card_num))):
        n = int(n)
        if (i % 2) == 1:
            n *= 2
            if n > 9:
                n -= 9
        total += n
    return total