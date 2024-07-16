def add_elements(arr, k):
    valid_nums = [num for num in arr if 10 <= num <= 100]
    
    if not valid_nums:
        return 0
    
    return sum(sorted(valid_nums)[:k])