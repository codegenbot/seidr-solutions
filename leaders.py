def find_leaders(arr):
    leaders = []
    max_right = arr[-1]
    leaders.insert(0, max_right)
    for i in range(len(arr) - 2, -1, -1):
        if all(arr[i] >= x for x in leaders):
            max_right = arr[i]
            leaders.insert(0, max_right)
    return leaders


arr = list(map(int, input().split()))
result = find_leaders(arr)
print(*result)