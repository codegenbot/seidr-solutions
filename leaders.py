def leaders(arr):
    max_right = arr[-1]
    leaders = [max_right]

    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            leaders.append(max_right)

    return leaders[::-1]

print(leaders([0]))
print(leaders([1, 0]))
print(leaders([1, 451]))
print(leaders([2, 1000, 0]))
print(leaders([2, 0, 1000]))