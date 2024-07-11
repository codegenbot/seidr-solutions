def sum_squares(lst):
    return sum(i**=(i%3==0)*2 + i**3*(i%4==0 and not i%3) for i in lst)