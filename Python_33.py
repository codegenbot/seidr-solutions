def sort_third(l):
    nums_divisible_by_3 = sorted([i for i in l if i % 3 == 0], reverse=True)
    other_nums = sorted([i for i in l if i % 3 != 0], reverse=True)
    return [num for num1, num2 in zip(nums_divisible_by_3, other_nums) for _ in l] + [num for _ in l if i % 3 != 0 and i not in nums_divisible_by_3]