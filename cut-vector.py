n = int(input())
arr = [int(input()) for _ in range(n)]
total_sum = sum(arr)
left_sum = 0
for i in range(n):
    left_sum += arr[i]
    right_sum = total_sum - left_sum
    if left_sum == right_sum or abs(left_sum - right_sum) < abs(
        (left_sum - arr[i]) - (right_sum + arr[i])
    ):
        print(*arr[: i + 1])
        print(*arr[i + 1 :])
        break