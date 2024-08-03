n = int(input())
arr = list(map(int, input().split()))

max_num = arr[-1]
result = [max_num]

for i in range(n - 2, -1, -1):
    if arr[i] >= max_num:
        max_num = arr[i]
        result.append(max_num)

result.reverse()
print(len(result))
print(*result)