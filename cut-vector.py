n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
left_sum = 0
right_sum = total_sum
min_diff = total_sum
cut_point = 0

for i in range(n):
    left_sum += arr[i]
    right_sum -= arr[i]
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_point = i + 1

print(arr[:cut_point])
print(arr[cut_point:])