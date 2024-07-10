def leaders(arr):
    leaders = [arr[-1]]
    for i in range(len(arr) - 1, 0, -1):
        if arr[i] >= arr[i + 1]:
            leaders.append(arr[i])
    return list(reversed(leaders))

print(leaders([4]))
print(leaders([34, 676, 700, 596]))