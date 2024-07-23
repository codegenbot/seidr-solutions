```
def leaders(arr):
    n = len(arr)
    leaders_list = []

    max_right = arr[n - 1]
    leaders_list.append(max_right)

    for i in range(n - 2, -1, -1):
        if arr[i] >= max_right:
            leaders_list.insert(0, arr[i])
            max_right = arr[i]

    return leaders_list