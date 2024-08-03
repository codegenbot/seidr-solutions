n = int(input())
arr = list(map(int, input().split()))

leaders = []
max_right = float("-inf")
for i in range(n - 1, -1, -1):
    if arr[i] >= max_right:
        leaders.append(arr[i])
        max_right = arr[i]

leaders.reverse()
print(len(leaders))
print(*leaders)