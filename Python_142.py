Here's the solution:

```
def sum_squares(lst):
    total = 0
    for i, value in enumerate(lst):
        if (i + 1) % 3 == 0 and (i + 1) % 4 != 0:
            total += value ** 2
        elif (i + 1) % 4 == 0 and (i + 1) % 3 != 0:
            total += value ** 3
    return total