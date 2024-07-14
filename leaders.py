```
def leaders(arr):
    n = len(arr)
    leaders = [arr[n-1]]

    for i in range(n-2, -1, -1):
        leaders.append(arr[i] if any(x < arr[i] for x in arr[i+1:]) else leaders[-1])

    return reversed(leaders)