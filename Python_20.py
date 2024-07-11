def closest_elements_to_target(arr1, arr2, target):
    combined_array = sorted(arr1 + arr2)
    
    left = 0
    right = len(combined_array) - 1
    
    while True:
        if left == right:
            return [combined_array[left], combined_array[left]]
        
        if target < (right - left) // 2 * (combined_array[right] - combined_array[left]):
            right = left + (right - left) // 2
        else:
            left = right - (right - left) // 2 + 1
    
    return [combined_array[left], combined_array[right]]