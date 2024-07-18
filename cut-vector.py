n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
partial_sum = 0
i = 0
while partial_sum < half_sum:
    partial_sum += arr[i]
    i += 1

if partial_sum == half_sum:
    print(arr[:i])
    print(arr[i:])
else:
    if partial_sum - arr[i - 1] <= half_sum - partial_sum:
        print(arr[:i])
        print(arr[i:])
    else:
        print(arr[: i - 1])
        print(arr[i - 1 :])