def find_closest_elements(arr1, arr2, target):
    merged_array = sorted([num for num in arr1 + arr2])
    left = 0
    right = len(merged_array) - 1

    while True:
        if left == right:
            return [merged_array[left], merged_array[left]]

        if target < (right - left) // 2 * (merged_array[right] - merged_array[left]) + merged_array[left]:
            right = left + (right - left) // 2
        else:
            left = right - (right - left) // 2 + 1

    return [merged_array[left], merged_array[right]]