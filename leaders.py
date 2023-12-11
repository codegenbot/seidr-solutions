def leaders(arr):
    result = []
    current_leader = arr[-1]
    for i in range(len(arr)-2, -1, -1):
        if arr[i] >= current_leader:
            result.append(current_leader)
            current_leader = arr[i]
    return result

print(leaders([0])) # [0]
print(leaders([1, 451])) # [1, 451]
print(leaders([2, 1000, 0])) # [2, 1000, 0]
print(leaders([2, 0, 1000])) # [1, 1000]