def add_elements(arr, k=0):
    filtered_nums = [num for num in arr if 10 <= num <= 100]
    sorted_filtered_nums = sorted(filtered_nums, reverse=True)
    
    if not sorted_filtered_nums:
        return 0
        
    if k >= len(sorted_filtered_nums):
        return sum(sorted_filtered_nums)
    
    return sum(sorted_filtered_nums[:k])