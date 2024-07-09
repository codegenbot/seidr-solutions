def add_elements(arr, k):
    if not arr:
        return 0
    
    start_idx = k if k < len(arr) else len(arr) - 1
    end_idx = 2*k if 2*k < len(arr) else len(arr)

    return sum(num for num in arr[start_idx:end_idx] if 10 <= num <= 100)