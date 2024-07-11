```
def double_the_difference(lst, target):
    even_nums = [i for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0]
    closest_diff = min(abs(x - target) for x in even_nums)
    return sum(i**2 for i in even_nums if abs(i - target) == closest_diff)