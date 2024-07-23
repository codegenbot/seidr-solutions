```python
def leaders(arr):
    n = len(arr)
    leaders_list = []
    leader = arr[n - 1]
    leaders_list.append(leader)

    for i in range(n-2, -1, -1):
        if arr[i] >= leader:
            leader = arr[i]
            leaders_list.insert(0, leader)

    return leaders_list