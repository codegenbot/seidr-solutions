def find_closest_elements(nums):
    nums = set(nums)
    sorted_nums = sorted(list(nums))
    closest_pair = (sorted_nums[0], sorted_nums[-1])
    for i in range(len(sorted_nums) - 1):
        if abs(sorted_nums[i + 1] - sorted_nums[i]) < abs(
            closest_pair[1] - closest_pair[0]
        ):
            closest_pair = (sorted_nums[i], sorted_nums[i + 1])
    return tuple(closest_pair)