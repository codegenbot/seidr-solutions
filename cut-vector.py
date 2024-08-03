def cut_vector(nums):
    left_sum = sum(nums[:i+1]) for i in range(len(nums))
    min_diff = min(abs(sum(nums[:i+1]) - sum(nums[i:])) for i in range(len(nums)))
    
    best_index = [i for i, diff in enumerate([abs(sum(nums[:i+1]) - sum(nums[i:])) for i in range(len(nums))]) if diff == min_diff][0]
    return nums[:best_index], nums[best_index:]