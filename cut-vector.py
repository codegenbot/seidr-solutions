n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
left_sum = 0
index = -1

for i in range(n):
    left_sum += arr[i]
    right_sum = total_sum - left_sum

    if left_sum == right_sum or abs(left_sum - right_sum) < abs(
        left_sum - right_sum - arr[i]
    ):
        index = i + 1
        break

print(arr[:index])
print(arr[index:])