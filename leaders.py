def find_leaders(arr):
    leaders = []
    min_right = arr[-1]
    leaders.append(min_right)
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= min_right:
            min_right = arr[i]
            leaders.append(min_right)
    return list(reversed(leaders))


arr = list(map(int, input().split()))
result = find_leaders(arr)
print(*result)