n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
current_sum = 0
idx = 0

while idx < n and current_sum < half_sum:
    current_sum += arr[idx]
    idx += 1

if current_sum == half_sum:
    print(*arr[:idx])
    print(*arr[idx:])
else:
    if abs(current_sum - half_sum) < abs(current_sum - half_sum + arr[idx]):
        print(*arr[:idx])
        print(*arr[idx:])
    else:
        print(*arr[: idx + 1])
        print(*arr[idx + 1 :])