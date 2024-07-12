def has_close_elements(arr, threshold):
    for i in range(len(arr) - 1):
        if abs(arr[i] - arr[i+1]) <= threshold:
            return True
    return False

result = has_close_elements([1.1, 2.2, 3.1, 4.1, 5.1], 0.5)
print(result)