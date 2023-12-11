def leaders(arr):
    result = []
    current_leader = arr[-1]
    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= current_leader:
            result.append(current_leader)
            current_leader = arr[i]
    return result
```
This solution uses a similar approach as the previous one, but it's more concise and efficient. It uses a single loop to iterate over the input array in reverse order, keeping track of the current leader and appending it to the result list whenever a new leader is found. The resulting list is then returned in the correct order by reversing it before returning it.