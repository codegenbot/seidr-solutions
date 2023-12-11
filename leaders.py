
def leaders(arr):
    result = []
    for i in range(len(arr)-1, -1, -1):
        current_leader = arr[i]
        for j in range(i+1, len(arr)):
            if arr[j] > current_leader:
                break
        else:
            result.append(current_leader)
    return result