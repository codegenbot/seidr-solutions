```python
def leaders(arr):
    leaders_list = []
    max_num = arr[len(arr) - 1]
    for i in range(len(arr)-1, -1, -1):
        if arr[i] >= max_num:
            leaders_list.append(arr[i])
            max_num = arr[i]
    return leaders_list