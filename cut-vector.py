n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
left_sum = 0
idx = -1

for i in range(n):
    left_sum += arr[i]
    if left_sum * 2 >= total_sum:
        idx = i
        break

if abs(left_sum * 2 - total_sum) < abs((left_sum - arr[idx]) * 2 - total_sum):
    idx -= 1

print(*arr[: idx + 1])
print(*arr[idx + 1 :])