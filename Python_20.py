```
def find_closest_elements(arr, k):
    arr.sort()
    if len(arr) == 1:
        return arr[0]
    left, right = 0, len(arr)-1
    while True:
        if right - left == 1:
            return arr[left], arr[right]
        mid = (left + right) // 2
        if k <= arr[mid]:
            right = mid
        else:
            left = mid+1