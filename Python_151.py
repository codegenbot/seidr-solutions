def double_the_difference(lst, target_diff):
    even_nums = [i for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0]
    closest_pair = min((a, b) for a, b in combinations(even_nums, 2) if abs(a - b) == target_diff)
    return sum(i**2 for i in even_nums if i not in closest_pair)