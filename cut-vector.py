arr = list(map(int, input().split()))

total_sum = sum(arr)
min_diff = float('inf')
cut_indexes = []

for i in range(1, len(arr)):
    left_sum = sum(arr[:i])
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff <= min_diff:
        if diff < min_diff:
            min_diff = diff
            cut_indexes = [i]
        else:
            cut_indexes.append(i)

subvector1 = arr[:cut_indexes[0]]
subvector2 = arr[cut_indexes[0]:]

print(*subvector1)
print(*subvector2)