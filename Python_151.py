```
def double_the_difference(lst, target_diff):
    even_nums = [i for i in lst if isinstance(i, int) and i % 2 == 0]
    pairs = [(x, y) for x in even_nums for y in even_nums if abs(x-y) == target_diff]
    return sum([pair[0]**2 + pair[1]**2 for pair in pairs])