def find_leaders(arr):
    leaders = []
    n = len(arr)
    max_right = arr[n - 1]

    for i in range(n - 1, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            leaders.append(arr[i])

    leaders.append(max_right)

    return leaders[::-1]

n = int(input())
arr = list(map(int, input().split()))
result = find_leaders(arr)
for leader in result:
    print(leader)