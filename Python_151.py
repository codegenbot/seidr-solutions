def double_the_difference(lst1, lst2):
    diff = abs(sum(lst1) - sum(lst2))
    diff_between_sums = abs(sum(lst1) - sum(lst2))
    half_diff = diff_between_sums / 2
    return (max(lst1) + min(lst2)) - 2 * half_diff


print(double_the_difference([10, 15], [3, 5]))