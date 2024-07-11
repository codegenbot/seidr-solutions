```Python
def sort_even(l: list):
    all_nums = sorted([abs(x) if x >= 0 else -abs(x) for x in l])
    return [x * (-1) if i % 2 != 0 and x < 0 else x for i, x in enumerate(all_nums)]