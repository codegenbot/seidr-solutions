```
def find_closest_elements():
    arr = [1.1, 2.2, 3.1, 4.1, 5.1]
    target = float(input("Enter the target: "))
    arr.sort()
    
    left = 0
    right = len(arr) - 1

    while True:
        if left == right:
            return [arr[left], arr[left]]

        if target < (right - left) * arr[left] + arr[right]:
            right = left + (right - left) // 2
        else:
            left = right - (right - left) // 2 + 1

    return [arr[left], arr[right]]