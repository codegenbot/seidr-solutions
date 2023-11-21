def find_leaders(arr):
    leaders = [arr[-1]]
    n = len(arr)

    for i in range(n - 2, -1, -1):
        if arr[i] >= leaders[-1]:
            leaders.append(arr[i])

    return leaders[::-1]


n = int(input())
arr = list(map(int, input().split()))
result = find_leaders(arr)
for leader in result:
    print(leader)