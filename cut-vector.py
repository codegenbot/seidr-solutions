n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
running_sum = 0
idx = -1

for i, num in enumerate(arr):
    running_sum += num
    if running_sum >= half_sum:
        idx = i
        break

if running_sum == half_sum:
    print(*arr[: idx + 1])
    print(*arr[idx + 1 :])
else:
    if abs(running_sum - half_sum) < abs(running_sum - half_sum - arr[idx]):
        print(*arr[: idx + 1])
        print(*arr[idx + 1 :])
    else:
        print(*arr[: idx + 2])
        print(*arr[idx + 2 :])