arr = list(map(int, input().split()))

min_diff = 0
cut_index = 0
for i in range(2, len(arr)):
    diff = abs(sum(arr[:i]) - sum(arr[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(subvector1)
print(subvector2)