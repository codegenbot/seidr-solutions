def add_elements(arr, k):
    if k == 0:
        return 0
    filtered_nums = [num for num in arr if 10 <= num <= 100]
    filtered_nums.sort(reverse=True)
    return sum(filtered_nums) if len(filtered_nums) < k else sum(filtered_nums[:k])