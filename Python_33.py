```
def sort_third(l):
    nums_divisible_by_3 = sorted([i for i in l if i % 3 == 0], reverse=True)
    other_nums = sorted([i for i in l if i % 3 != 0], reverse=True)

    result = []
    index = 0
    while len(nums_divisible_by_3) > 0 and len(other_nums) > 0:
        result.append(nums_divisible_by_3.pop(0))
        result.append(other_nums.pop(0))

    result.extend(nums_divisible_by_3)
    result.extend(other_nums)

    return result