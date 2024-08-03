def double_the_sum(lst):
    return (sum(lst) - min(lst)) * 2 if len(set(lst)) == 1 else sum(i**2 for i in lst if isinstance(i, int) and i > 0)