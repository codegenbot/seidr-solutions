n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
prefix_sum = 0

for i in range(n):
    prefix_sum += arr[i]
    if prefix_sum * 2 >= total_sum:
        break

if abs((total_sum - prefix_sum) - prefix_sum) < abs(total_sum - 2 * prefix_sum):
    print(arr[: i + 1])
    print(arr[i + 1 :])
else:
    print(arr[:i])
    print(arr[i:])