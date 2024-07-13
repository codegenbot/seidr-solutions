Here is the Python function to solve the problem:

```
def luhn(card):
    card = [int(x) for x in str(card)]
    total = 0
    for i, val in enumerate(card):
        if (i % 2 == 1):
            val *= 2
            if val > 9:
                val -= 9
        total += val
    return total