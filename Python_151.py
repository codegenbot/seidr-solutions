```
def double_the_difference(input_lst):
    return sum(i**2 for i in input_lst if isinstance(i, int) and i > 0)