n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
prefix_sum = 0
cut_idx = -1

for i, num in enumerate(arr):
    prefix_sum += num
    if prefix_sum >= half_sum:
        cut_idx = i
        break

if prefix_sum == half_sum:
    print(*arr[: cut_idx + 1])
    print(*arr[cut_idx + 1 :])
else:
    if abs(total_sum - 2 * prefix_sum) < abs(total_sum - 2 * (prefix_sum - num)):
        print(*arr[: cut_idx + 1])
        print(*arr[cut_idx + 1 :])
    else:
        print(*arr[:cut_idx])
        print(*arr[cut_idx:])