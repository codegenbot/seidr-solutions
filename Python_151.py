```
def double_the_difference(lst):
    even_sum = sum(i ** 2 for i in lst if isinstance(i, int) and i % 2 == 0)
    return even_sum