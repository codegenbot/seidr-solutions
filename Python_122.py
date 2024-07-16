def add_elements(arr, k):
    if k == 0:
        return 0
    filtered_nums = [num for num in arr if num >= 10 and num <= 100]
    return sum(filtered_nums[-k:]) if len(filtered_nums) >= k else 0