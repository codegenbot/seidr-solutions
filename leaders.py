n = int(input())
arr = list(map(int, input().split()))

leaders = []
max_val = -1

for i in range(n-1, -1, -1):
    if arr[i] >= max_val:
        leaders.append(arr[i])
        max_val = arr[i]

leaders.reverse()
print(len(leaders))
print(*leaders)