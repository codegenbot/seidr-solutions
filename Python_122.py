def add_elements(arr, k=0):
    filtered_nums = [num for num in arr if 10 <= num <= 100]
    
    if not filtered_nums:
        return 0
    
    filtered_nums.sort(reverse=True)
   
    return sum(filtered_nums[:k] if k > 0 and k <= len(filtered_nums) else filtered_nums)