Here is the Python solution for the problem:

def cut_vector(nums):
    left_sum = sum(nums[:i]) for i in range(len(nums)) if nums[i:] == sorted([n1 - n2 for n1, n2 in zip(nums, nums[i:])])]
    if not left_sum:
        min_diff = min(abs(n1 - n2) for n1, n2 in zip(nums, nums[1:]))
        index = np.argmin(abs(np.diff(nums)))
    else:
        index = left_sum[0]
    return nums[:index], nums[index:]