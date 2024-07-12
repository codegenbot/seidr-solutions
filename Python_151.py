def double_the_difference(lst):
    if len(lst) < 2:
        return 0
    odd_sum = sum(i for i in lst if isinstance(i, int) and i > 0)
    return (max(lst) - min(lst)) * 2 if odd_sum != 0 else 0

print(double_the_difference([1, 2, 3, 4]))