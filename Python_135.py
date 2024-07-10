def can_arrange(arr):
    for i in range(1, len(arr)):
        if arr[i-1] >= arr[i]:
            return "The array cannot be arranged in ascending order."
    return "The array can be arranged in ascending order."

print(can_arrange([1, 2, 3]))