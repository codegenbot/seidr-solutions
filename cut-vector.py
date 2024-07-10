n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
half_sum = total_sum // 2
running_sum = 0
idx = 0

while running_sum < half_sum:
    running_sum += arr[idx]
    idx += 1

if running_sum == half_sum:
    print(*arr[:idx])
    print(*arr[idx:])
else:
    if abs(running_sum - half_sum) < abs(running_sum - half_sum - arr[idx]):
        print(*arr[:idx])
        print(*arr[idx:])
    else:
        print(*arr[: idx + 1])
        print(*arr[idx + 1 :])