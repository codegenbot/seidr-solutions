def add_elements(arr, k=0):
    filtered_nums = [num for num in arr if 10 <= num <= 100]
    if k > 0 and len(filtered_nums) >= k:
        return sum(sorted(filtered_nums, reverse=True)[:k])
    return 0