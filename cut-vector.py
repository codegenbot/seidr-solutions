n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
left_sum = 0
index = 0

for i, num in enumerate(arr):
    left_sum += num
    if left_sum >= total_sum - left_sum:
        index = i
        break

print(*arr[: index + 1])
print(*arr[index + 1 :])