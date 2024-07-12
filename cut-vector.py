n = int(input())
arr = [int(input()) for _ in range(n)]
total_sum = sum(arr)
prefix_sum = 0
result = float("inf")
index = -1

for i in range(n):
    prefix_sum += arr[i]
    diff = abs(prefix_sum - (total_sum - prefix_sum))
    if diff < result:
        result = diff
        index = i

print(arr[: index + 1])
print(arr[index + 1 :])