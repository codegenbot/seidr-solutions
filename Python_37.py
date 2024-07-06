def sort_even(l: list):
    even_nums = sorted([x for x in l if x % 2 == 0])
    result = []
    i, j = 0, 0
    while i < len(l) or j < len(even_nums):
        if i < len(l):
            result.append(l[i])
            i += 1
        if j < len(even_nums):
            result.append(even_nums[j])
            j += 1
    return result