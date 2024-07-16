def add_elements(arr, k=0):
    filtered_nums = [num for num in arr if 10 <= num <= 100]
    sorted_filtered_nums = sorted(filtered_nums, reverse=True)
    
    if not sorted_filtered_nums or k < 1:
        return 0
    
    if k <= len(sorted_filtered_nums):
        return sorted_filtered_nums[k - 1]
    else:
        return sum(sorted_filtered_nums)