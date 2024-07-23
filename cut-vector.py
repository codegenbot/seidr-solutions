n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
min_diff = abs(total_sum - 2 * arr[0])
cut_index = 0

for i in range(1, n):
    diff = abs(total_sum - 2 * sum(arr[:i]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)