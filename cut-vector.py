n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
curr_sum = 0
idx = 0

for i, num in enumerate(arr):
    curr_sum += num
    if curr_sum >= half_sum:
        idx = i
        break

if abs(curr_sum - half_sum) < abs(curr_sum - num - half_sum):
    print(*arr[: idx + 1])
    print(*arr[idx + 1 :])
else:
    print(*arr[:idx])
    print(*arr[idx:])