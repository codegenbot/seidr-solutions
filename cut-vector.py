arr = list(map(int, input().split()))

total_sum = sum(arr)
min_diff = total_sum
cut_position = 0

for i in range(1, len(arr)):
    current_diff = abs(2 * sum(arr[:i]) - total_sum + arr[i])
    if current_diff < min_diff:
        min_diff = current_diff
        cut_position = i

subvector1 = arr[:cut_position+1] if cut_position != 0 else [arr[0]]
subvector2 = arr[cut_position:]

print(*subvector1)
print(*subvector2)