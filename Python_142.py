```
def sum_squares(lst):
    total = 0
    for i, num in enumerate(lst):
        if (i % 3 == 0 and i % 4 != 0) or (i % 4 == 0 and i % 3 != 0):
            total += pow(num, max(2, 3))
    return total