n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
half_sum = total_sum // 2

prefix_sum = 0
for i, num in enumerate(arr):
    prefix_sum += num
    if prefix_sum >= half_sum:
        if prefix_sum == half_sum or abs(prefix_sum - half_sum) < abs(
            prefix_sum - num - half_sum
        ):
            print(*arr[:i + 1])
            print(*arr[i + 1:])
            break