def find_closest_elements(arr, target):
    arr.sort()
    left = 0
    right = len(arr) - 1
    
    while True:
        if left == right:
            return [arr[left], arr[left]]

        if target < arr[left] + (right - left) // 2 * (arr[right] - arr[left]):
            right = left + (right - left) // 2
        else:
            left = right - (right - left) // 2 + 1

    return [arr[left], arr[right]]