n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2

left_sum = 0
for i, num in enumerate(arr):
    left_sum += num
    if left_sum >= half_sum:
        break

if abs(total_sum - 2 * left_sum) < abs(total_sum - 2 * (left_sum - num)):
    print(arr[: i + 1])
    print(arr[i + 1 :])
else:
    print(arr[:i])
    print(arr[i:])