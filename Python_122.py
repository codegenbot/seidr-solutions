def add_elements(arr, k):
    filtered_nums = [num for num in arr if 10 <= num <= 100]
    return sum(sorted(filtered_nums)[:k]) if len(filtered_nums) >= k else sum(filtered_nums)