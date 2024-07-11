n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
left_sum = 0
index = 0

for i in range(n - 1):
    left_sum += arr[i]
    right_sum = total_sum - left_sum
    if abs(left_sum - right_sum) <= abs(left_sum + arr[i + 1] - right_sum):
        break
    index = i + 1

print(arr[: index + 1])
print(arr[index + 1 :])