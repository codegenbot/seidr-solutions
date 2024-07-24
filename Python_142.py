def sum_squares(lst):
    return sum(i**=3 if i%3==0 and i%4!=0 else i**=4 if i%4==0 and i%3!=0 else i for i in lst)