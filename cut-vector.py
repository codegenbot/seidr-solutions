arr = list(map(int, input().split()))

total_sum = sum(arr)
min_diff = total_sum
cut_position = -1

for i in range(len(arr) - 1):
    current_diff = abs(2 * sum(arr[:i + 1]) - total_sum)
    if current_diff <= min_diff:
        min_diff = current_diff
        cut_position = i

subvector1 = arr[:cut_position + 1]
subvector2 = arr[cut_position + 1:]

print(*subvector1)
print(*subvector2)