
def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if i % 3 == 0:
            lst[i] = lst[i] * lst[i]
        elif i % 4 == 0:
            lst[i] = lst[i] * lst[i] * lst[i]
        total += lst[i]
    return total
    """
