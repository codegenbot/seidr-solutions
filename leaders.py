n = int(input())
arr = list(map(int, input().split()))

leaders = [arr[-1]]
max_value = arr[-1]

for i in range(n-2, -1, -1):
    if arr[i] >= max_value:
        leaders.append(arr[i])
        max_value = arr[i]

leaders.reverse()
print(len(leaders))
print(*leaders)