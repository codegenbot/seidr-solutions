```
def find_closest_elements(arr, target):
    arr.sort()
    left = 0
    right = len(arr) - 1
    
    closest_pair = [arr[0], arr[0]]
    min_diff = abs(target - (arr[0] + arr[0]))
    
    while True:
        if left == right:
            return [arr[left], arr[left]]
        
        if target < (right - left) * arr[left] + arr[right]:
            right = left + (right - left) // 2
        else:
            left = right - (right - left) // 2 + 1
        
        pair = [arr[left], arr[right]]
        diff = abs(target - (pair[0] + pair[1]))
        
        if diff < min_diff:
            closest_pair = pair
            min_diff = diff
    
    return closest_pair