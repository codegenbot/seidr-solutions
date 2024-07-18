n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
cum_sum = 0
idx = 0

for i, num in enumerate(arr):
    cum_sum += num
    if cum_sum >= half_sum:
        if cum_sum == half_sum or cum_sum - half_sum < total_sum - cum_sum:
            idx = i
            break

print(*arr[: idx + 1])
print(*arr[idx + 1 :])