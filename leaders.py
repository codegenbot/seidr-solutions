def find_leaders(arr):
    leaders = []
    max_right = arr[-1]

    for i in range(len(arr) - 2, -1, -1):
        if arr[i] > max_right:
            max_right = arr[i]
            leaders.append(max_right)

    return leaders


arr = list(map(int, input().split()))

result = find_leaders(arr)
print(len(result))
for leader in result:
    print(leader)