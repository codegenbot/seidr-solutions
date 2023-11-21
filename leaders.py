def find_leaders(arr):
    leaders = []
    n = len(arr)
    max_right = arr[n-1]
    leaders.append(max_right)
    for i in range(n-2, -1