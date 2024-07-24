n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
left_sum = 0
idx = 0

for i, num in enumerate(arr):
    left_sum += num
    if left_sum >= half_sum:
        idx = i
        break

if left_sum == half_sum:
    print(arr[: idx + 1])
    print(arr[idx + 1 :])
else:
    if abs(left_sum - half_sum) < abs(left_sum - num - half_sum):
        print(arr[: idx + 1])
        print(arr[idx + 1 :])
    else:
        print(arr[: idx + 1] + [arr[idx + 1]])
        print([0])