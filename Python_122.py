def add_elements(arr, k):
    filtered_nums = [num for num in arr if 10 <= num <= 99]
    if len(filtered_nums) < k:
        return sum(sorted(filtered_nums, reverse=True))
    return sum(sorted(filtered_nums, reverse=True)[:k])