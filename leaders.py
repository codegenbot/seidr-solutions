def leaders(arr):
    lead = []
    maxright = 0
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] >= maxright:
            lead.append(arr[i])
            maxright = arr[i]
    return list(reversed(lead))