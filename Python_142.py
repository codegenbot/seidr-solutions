```
def sum_squares(lst):
    """
    This function calculates the sum of squares for every 3rd element and the cube of every 4th element in the list.
    """
    total_sum = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total_sum += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total_sum += lst[i] ** 3
    return total_sum