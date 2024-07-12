Here is the completed code:

def sum_squares(lst):
    return sum(a**3 if i%4==0 and i%3!=0 else a**2 if i%3==0 else a for i,a in enumerate(lst))