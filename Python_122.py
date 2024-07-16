def add_elements(arr, k=0):
    filtered_nums = [num for num in arr if 10 <= num <= 100]
    if k == 0:
        return sum(sorted(filtered_nums))
    else:
        return sum(sorted(filtered_nums)[:k])