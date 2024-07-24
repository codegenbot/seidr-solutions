n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
target_sum = total_sum // 2

prefix_sum = 0
for i, num in enumerate(arr):
    prefix_sum += num
    if prefix_sum >= target_sum:
        if prefix_sum == target_sum or abs(prefix_sum - target_sum) < abs(
            prefix_sum - num - target_sum
        ):
            print(*arr[: i + 1])
            print(*arr[i + 1 :])
            break