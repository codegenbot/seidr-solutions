def add_elements(arr, k=0):
    filtered_nums = [num for num in arr if 10 <= num <= 100]
    sorted_filtered_nums = sorted(filtered_nums, reverse=True)
    if k == 0:
        return filtered_nums[0] if filtered_nums else 0
    return sum(sorted_filtered_nums[:k]) if len(filtered_nums) >= k else sum(filtered_nums)