def double_the_difference(lst, target_diff):
    even_nums = [i for i in lst if isinstance(i, int) and i % 2 == 0]
    return sum(
        i**2
        for pair in zip(even_nums, even_nums[1:])
        if abs(pair[1] - pair[0]) == target_diff
    )