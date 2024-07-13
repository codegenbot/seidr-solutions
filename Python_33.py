```
def sort_third(l):
    nums_divisible_by_3 = sorted([i for i in l if i % 3 == 0], reverse=True)
    other_nums = sorted([i for i in l if i % 3 != 0], reverse=True)

    result = []
    index = 0
    for num in l:
        if num % 3 == 0:
            result.append(nums_divisible_by_3.pop(0))
        else:
            result.append(other_nums.pop(0))

    return result