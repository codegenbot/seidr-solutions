def add_elements(arr, k=0):
    filtered_nums = [num for num in arr if 10 <= num <= 100]
    if k <= 0:
        return sum(sorted(filtered_nums, reverse=True)[:k])
    if len(filtered_nums) < k:
        return 0
    return sum(sorted(filtered_nums, reverse=True)[:k])