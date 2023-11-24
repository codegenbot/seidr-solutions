n = int(input())
arr = list(map(int, input().split()))

leaders = []
max_leader = arr[-1]
leaders.append(max_leader)

for i in range(n-2, -1, -1):
    if arr[i] >= max_leader:
        max_leader = arr[i]
        leaders.append(max_leader)

leaders.reverse()
print(len(leaders))
print(*leaders)