def find_leaders(arr):
    leaders = []
    for i in range(len(arr) - 1, -1, -1):
        max_right = arr[i]
        if all(num <= max_right for num in arr[i+1:]):
            leaders.insert(0, max_right)
    return leaders