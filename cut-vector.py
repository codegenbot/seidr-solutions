n = int(input())
arr = [int(input()) for _ in range(n)]
total_sum = sum(arr)
left_sum = 0
right_sum = total_sum

for i in range(n):
    left_sum += arr[i]
    right_sum -= arr[i]
    if left_sum == right_sum or abs(left_sum - right_sum) < abs(total_sum / 2):
        print(arr[: i + 1])
        print(arr[i + 1 :])
        break