def find_leaders(arr):
    leaders = []
    max_right = arr[-1]
    leaders.append(max_right)
    for i in range(len(arr) - 2, -1, -1):
        if all(arr[i] >= x for x in arr[i+1:]) or i == len(arr) - 1:
            max_right = arr[i]
            leaders.append(max_right)
    return list(reversed(leaders))


arr = list(map(int, input().split()))
result = find_leaders(arr)
print(*result)