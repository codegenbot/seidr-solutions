def find_leaders(arr):
    leaders = []
    n = len(arr)
    max_right = arr[n - 1]

    for i in range(n - 1, -1, -1):
        if arr[i] >= max_right:
            leaders.insert(0, arr[i])
            max_right = arr[i]

    return leaders


n = int(input())
arr = list(map(int, input().split()))
result = find_leaders(arr)
for leader in result:
    print(leader)