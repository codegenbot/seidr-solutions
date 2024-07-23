n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
closest_sum = 0
for i in range(n):
    if closest_sum + arr[i] <= half_sum:
        closest_sum += arr[i]
    else:
        break

if closest_sum == half_sum:
    print(arr[: i + 1])
    print(arr[i + 1 :])
else:
    print(arr)
    print([0])