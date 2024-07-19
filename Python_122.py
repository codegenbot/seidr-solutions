def add_elements(arr, k):
    filtered_nums = [num for num in arr if 10 <= num <= 99]
    if len(filtered_nums) < k:
        return 0
    if filtered_nums:
        return sum(sorted(filtered_nums, reverse=True)[:min(k, len(filtered_nums))])
    else:
        return 0