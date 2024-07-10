def double_the_difference_value(x): 
    return (x[1] - x[0]) * 2
 

def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return double_the_difference_value((min(lst), max(lst))) * 2

print(double_the_difference([7, 1]))