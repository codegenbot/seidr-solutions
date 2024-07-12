n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
current_sum = 0
idx = 0

while current_sum + arr[idx] <= half_sum:
    current_sum += arr[idx]
    idx += 1

if current_sum == half_sum:
    print(arr[:idx])
    print(arr[idx:])
else:
    if current_sum + arr[idx] - half_sum <= half_sum - current_sum:
        print(arr[: idx + 1])
        print(arr[idx + 1 :])
    else:
        print(arr[:idx])
        print(arr[idx:])