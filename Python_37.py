```
def sort_even(l: list):
    even_nums = sorted([x for x in l if x % 2 == 0])
    odd_nums = [x for x in l if x % 2 != 0]
    result = []
    i, j = 0, 0
    while i < len(even_nums) and j < len(odd_nums):
        if even_nums[i] <= odd_nums[j]:
            result.append(even_nums[i])
            i += 1
        else:
            result.append(odd_nums[j])
            j += 1
    result.extend(even_nums[i:])
    result.extend(odd_nums[j:])
    return result