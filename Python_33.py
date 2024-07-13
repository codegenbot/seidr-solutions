def sort_third(l):
    nums_divisible_by_3 = sorted([i for i in l if i % 3 == 0], reverse=True)
    other_nums = sorted([i for i in l if i % 3 != 0], reverse=True)
    return [num for _ in range(len(l)) for num in ((nums_divisible_by_3 + other_nums)[i//3] if i % 3 == 0 else [other_nums[i//3]]) for i in l]