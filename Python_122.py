def add_elements(arr, k):
    filtered_nums = [num for num in arr if 10 <= num <= 100]
    filtered_nums.sort(reverse=True)
    return sum(filtered_nums[:k]) if k <= len(filtered_nums) else 0