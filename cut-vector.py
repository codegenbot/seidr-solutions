def cut_vector(nums):
    n = len(nums)
    min_diff = float("inf")
    cut_index = -1
    for i in range(1, n):
        left_sum = sum(nums[:i])
        right_sum = sum(nums[i:])
        if left_sum == right_sum:
            return (nums[:i], nums[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    if cut_index != -1:
        return (nums[:cut_index], nums[cut_index:])
    else:
        return ((0,), (nums[0],))


print(cut_vector([1]))
print(cut_vector([1, 10]))
print(cut_vector([1, 100]))
print(cut_vector([1, 1000]))
print(cut_vector([1, 10000]))