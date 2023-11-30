def sorted_list(nums):
    return sorted(nums, key=lambda x: (len(x) % 2 == 0, x))