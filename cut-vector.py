n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
prefix_sum = 0
index = -1

for i, num in enumerate(arr):
    prefix_sum += num
    if prefix_sum >= half_sum:
        index = i
        break

if prefix_sum - arr[index] == half_sum:
    print(arr[: index + 1])
    print(arr[index + 1 :])
else:
    if abs((prefix_sum - arr[index]) - half_sum) < abs(prefix_sum - half_sum):
        print(arr[: index + 1])
        print(arr[index + 1 :])
    else:
        print(arr[:index])
        print(arr[index:])