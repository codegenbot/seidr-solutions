```
def leaders(arr):
    lead = [arr[-1]]
    maxright = arr[-1]
    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= maxright:
            lead.append(arr[i])
            maxright = arr[i]
    return lead[::-1]