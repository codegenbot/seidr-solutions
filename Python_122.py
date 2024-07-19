def add_elements(arr, k):
    if not arr or k <= 0:
        return 0
    
    filtered_nums = [num for num in arr if isinstance(num, int) and 10 <= num <= 99]
    sorted_nums = sorted(filtered_nums, reverse=True)
    
    return sum(sorted_nums[:k])