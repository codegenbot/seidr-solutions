def find_leaders(arr):
    leaders = []
    max_right = -1
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_right or max_right == -1:
            leaders.append(arr[i])
            max_right = arr[i]
    return leaders


arr = list(map(int, input().split()))

result = find_leaders(arr)
for leader in result:
    print(leader)