def find_leaders(arr):
    leaders = []
    n = len(arr)
    max_right = arr[0]
    for i in range(1, n):
        if arr[i] >= max_right:
            leaders.append(arr[i])
            max_right = arr[i]
    leaders.append(arr[n - 1])
    return leaders[::-1]


n = int(input())
arr = list(map(int, input().split()))
result = find_leaders(arr)
for leader in result:
    print(leader)