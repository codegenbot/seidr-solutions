def find_leaders(arr):
    leaders = []
    max_right = arr[-1]
    leaders.append(max_right)
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= max_right:
            max_right = arr[i]
            leaders.insert(0, arr[i])
    return leaders


n = int(input())
arr = list(map(int, input().split()))

result = find_leaders(arr)
print(len(result))
for leader in result:
    print(leader)