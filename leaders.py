```
def leaders(arr):
    n = len(arr)
    last_element = arr[n-1]
    leaders_list = [last_element]

    for i in range(n-2,-1,-1):
        if arr[i] >= last_element:
            leaders_list.insert(0, arr[i])
            last_element = arr[i]

    return leaders_list