def add_elements(arr, k):
    filtered_nums = [num for num in arr if 10 <= num <= 99]
    return sum(sorted(filtered_nums, reverse=True)[:k]) if k <= len(filtered_nums) else 0