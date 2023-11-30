def sorted_list(nums):
    return sorted(filter(lambda x: len(x) % 2 == 0, nums), key=len)