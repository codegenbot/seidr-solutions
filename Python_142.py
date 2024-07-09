def sum_squares(lst):
    return sum(i**3 if i%12==0 or i%4==0 else i**2 for i in lst)