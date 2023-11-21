def find_leaders(arr):
    leaders = []
    n = len(arr)
    max_right = arr[n - 1]
    leaders.append(max_right)
    i = n - 2
    while i >= 0:
        if arr[i] >= max_right:
            leaders.append(arr[i])
            max_right = arr[i]
        i -= 1
    return reversed(leaders)


n = int(input())
arr = list(map(int, input().split()))

result = find_leaders(arr)

for leader in result:
    print(leader)