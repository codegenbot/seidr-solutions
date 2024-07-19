def add_elements(arr, k):
    filtered_nums = [num for num in arr if 10 <= num <= 99]
    if k > len(filtered_nums):
        return sum(filtered_nums)
    return sum(sorted(filtered_nums, reverse=True)[:k])