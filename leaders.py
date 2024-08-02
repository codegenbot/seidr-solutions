Here is the Python solution for the problem:

```
def leaders(arr):
    n = len(arr)
    leader = [arr[n-1]]
    
    for i in range(n-2, -1, -1):
        if arr[i] >= arr[-1]:
            leader.append(arr[i])
            last_leader = i
        else:
            break
    
    return reversed(leader)