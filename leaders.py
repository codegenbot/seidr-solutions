def leaders(arr):
    lead = []
    maxright = arr[0]
    for i in range(len(arr)):
        if arr[i] >= maxright:
            lead.append(arr[i])
            maxright = arr[i]
    return lead