```Python
def double_the_difference(lst):
    even_sum = sum(i**2 for i in lst if isinstance(i, int) and i >= 0)
    return (even_sum - len([i for i in lst if isinstance(i, int)])) * 2