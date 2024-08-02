Here is the Python solution for the problem:

def leaders(arr):
    leaders_list = []
    max_right = arr[-1]
    leaders_list.append(max_right)
    
    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= max_right:
            leaders_list.insert(0, arr[i])
            max_right = arr[i]
    
    return leaders_list