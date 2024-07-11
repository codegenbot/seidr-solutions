Here's the corrected function:

def find_closest_elements(arr, target):
    arr.sort()
    left = 0
    right = len(arr) - 1
    
    while True:
        if left == right:
            return [arr[left], arr[left]]
        
        if target < (right - left) * arr[left] + arr[right]:
            right = (left + right) // 2
        elif target > (right - left) * arr[left] + arr[right]:
            left = right + 1
        else:
            low, high = left, right
            
            while True:
                mid = (low + high) // 2
                
                if arr[mid] == target:
                    return [arr[mid], arr[mid]]
                
                if target < arr[mid]:
                    high = mid - 1
                else:
                    low = mid + 1
                    
                if low >= high:
                    return [arr[low], arr[high]]