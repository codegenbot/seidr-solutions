Here is the completed code:

def sum_squares(lst):
    return sum(i ** (4 if i % 12 == 0 else 3 if i % 3 == 0 else 1) for i in lst)