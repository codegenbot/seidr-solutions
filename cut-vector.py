n = int(input())
arr = []
for i in range(n):
    arr.append(int(input()))

total_sum = sum(arr)
left_sum = 0
right_sum = total_sum

for i in range(n):
    left_sum += arr[i]
    right_sum -= arr[i]
    if left_sum == right_sum or abs(left_sum - right_sum) < abs(
        (left_sum - arr[i]) - (right_sum + arr[i])
    ):
        print(arr[: i + 1])
        print(arr[i + 1 :])
        break