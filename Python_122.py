def add_elements(arr, k):
    filtered_nums = [num for num in arr if 10 <= num <= 99]
    sorted_nums = sorted(filtered_nums, reverse=True)
    
    return sum(sorted_nums[:k])