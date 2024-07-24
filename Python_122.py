def add_elements(arr, k):
    sorted_nums = sorted([num for num in arr if 10 <= num <= 100])
    return sum(sorted_nums[:k]) if len(sorted_nums) >= k else 0