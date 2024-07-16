def add_elements(arr, k=0):
    if k <= 0 or not all(isinstance(num, int) for num in arr):
        return 0
    filtered_nums = [num for num in arr if 10 <= num <= 100]
    if len(filtered_nums) < k:
        return 0
    return sum(sorted(filtered_nums, reverse=True)[:k])