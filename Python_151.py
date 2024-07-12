def check(lst1, lst2):
    return abs(double_the_difference(lst1) - double_the_difference(lst2)) * 2

def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0)