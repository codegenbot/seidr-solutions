arr = list(map(int, input().split()))
total_sum = sum(arr)
left_sum = 0
cut_index = 0

for i, num in enumerate(arr):
    left_sum += num
    right_sum = total_sum - left_sum
    if abs(left_sum - right_sum) <= abs(left_sum - right_sum - num):
        cut_index = i
        break

subvector1 = arr[: cut_index + 1]
subvector2 = arr[cut_index + 1 :]

print(subvector1)
print(subvector2)