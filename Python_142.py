def sum_squares(lst):
    return sum([num**2 if i % 3 == 0 else num**3 if i % 4 == 0 else num for i, num in enumerate(lst)])