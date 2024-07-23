n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
half_sum = total_sum // 2

left_sum = 0
for i, num in enumerate(arr):
    left_sum += num
    if left_sum >= half_sum:
        break

if abs(left_sum - (total_sum - left_sum)) <= abs(
    left_sum - (total_sum - left_sum - num)
):
    print(arr[: i + 1])
    print(arr[i + 1 :])
else:
    print(arr[:i])
    print(arr[i:])