def find_leaders(arr):
    leaders = []
    n = len(arr)
    max_right = arr[n - 1]
    leaders.append(max_right)
    for i in range(n - 2, -1, -1):
        if arr[i] >= max_right:
            leaders.append(arr[i])
            max_right = arr[i]
    leaders.reverse()
    return leaders


n = int(input())
arr = list(map(int, input().split()))
result = find_leaders(arr)
for leader in result:
    print(leader)