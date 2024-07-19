def add_elements(arr, k):
    filtered_nums = [num for num in arr if 10 <= num <= 99]
    if not filtered_nums:
        return 0
    return sum(filtered_nums) if len(filtered_nums) < k else sum(sorted(filtered_nums, reverse=True)[:k])