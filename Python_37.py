def sort_even(l: list):
    even_nums = [x for x in l if x % 2 == 0]
    odd_nums = sorted([x for x in l if x % 2 != 0])
    result = []
    i, j = 0, 0
    while i < len(even_nums) or j < len(odd_nums):
        if i < len(even_nums):
            result.append(even_nums[i])
            i += 1
        if j < len(odd_nums):
            result.append(odd_nums[j])
            j += 1
    return result