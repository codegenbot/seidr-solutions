n = int(input())
arr = list(map(int, input().split()))

max_num = arr[-1]
leaders = [max_num]

for i in range(n - 2, -1, -1):
    if arr[i] >= max_num:
        max_num = arr[i]
        leaders.append(max_num)

leaders.reverse()
print(len(leaders))
print(*leaders)