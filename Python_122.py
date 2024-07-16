def add_elements(arr, k=0):
    filtered_nums = [num for num in arr if 10 <= num <= 100]
    if k <= 0 or k > len(filtered_nums):
        return sum(sorted(filtered_nums, reverse=True)[:k])
    return sum(filtered_nums[:k]) if k > 1 else filtered_nums[0]