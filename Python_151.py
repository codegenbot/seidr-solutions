def check_sum(lst):
    odd_sum = sum(i for i in lst if isinstance(i, int) and i % 2 != 0)
    difference = abs(sum(i for i in lst) - odd_sum * 2)
    return "YES" if double_the_difference(lst) == difference else "NO"