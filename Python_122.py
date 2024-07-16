def add_elements(arr, k=0):
    filtered_nums = [num for num in arr if 10 <= num <= 100]
    filtered_nums.sort(reverse=True)
    return sum(filtered_nums[:k]) if k > 0 else filtered_nums[0]