def add_elements(arr, k):
    result = [num for num in arr if 10 <= num <= 99]
    return result if len(result) >= k else result[:]