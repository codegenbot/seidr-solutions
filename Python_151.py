```
def double_the_difference(input_list):
    return sum(i**2 for i in input_list if isinstance(i, int) and i >= 0 and i % 2 != 0)