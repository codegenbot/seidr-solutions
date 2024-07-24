def add_elements(arr, k):
    sorted_nums = sorted([num for num in arr if 10 <= num <= 100])
    if len(sorted_nums) < k:
        return 0
    return sum(sorted_nums[:k])