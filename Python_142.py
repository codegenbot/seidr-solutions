Here is the completed code:

def sum_squares(lst):
    return sum(i**i if i % 3 == 0 and i % 4 != 0 else i**(2 if i % 3 == 0 else (3 if i % 4 == 0 else 1)) for i in lst)