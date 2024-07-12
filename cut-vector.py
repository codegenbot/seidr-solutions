n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
current_sum = 0
min_diff = total_sum
cut_index = 0

for i in range(n):
    current_sum += arr[i]
    diff = abs(total_sum - 2 * current_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

output1 = arr[: cut_index + 1]
output2 = arr[cut_index + 1 :]

print(*output1)
print(*output2)