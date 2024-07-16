def add_elements(arr, k=0):
    filtered_nums = [num for num in arr if 10 <= num <= 100]
    sorted_filtered_nums = sorted(filtered_nums, reverse=True)
    
    if not sorted_filtered_nums:
        return 0
    
    if k <= 0:
        return 0
    
    return sorted_filtered_nums[k-1] if k <= len(sorted_filtered_nums) else sum(sorted_filtered_nums[:k])