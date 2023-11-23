def find_leaders(arr):
    leaders = []
    leaders.append(arr[-1])
    for i in range(len(arr) - 2, -1, -1):
        if arr[i] >= leaders[-1]:
            leaders.append(arr[i])
    return leaders


n = int(input())
arr = list(map(int, input().split()))

result = find_leaders(arr)
print(len(result))
for leader in result:
    print(leader)