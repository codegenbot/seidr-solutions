def has_close_elements(arr):
    for i in range(len(arr) - 1):
        if abs(arr[i] - arr[i+1]) <= 1:
            return True
    return False

result = has_close_elements([1, 2, 10, 5])
print(result)