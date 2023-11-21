def find_leaders(arr):
    leaders = []
    max_right = -1
    for i in range(len(arr) - 1, -1, -1):
        if arr[i] >= max_right:
            leaders.append(arr[i])
            max_right = arr[i]
    return leaders


n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))

result = find_leaders(arr)
for leader in result:
    print(leader)