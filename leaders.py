def find_leaders(arr):
    leaders = []
    min_right = arr[0]
    leaders.append(min_right)
    for i in range(1, len(arr)):
        if arr[i] >= min_right:
            min_right = arr[i]
            leaders.append(min_right)
    return leaders

arr = list(map(int, input().split()))
result = find_leaders(arr)
print(*result)