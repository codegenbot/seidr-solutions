n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
cut_index = -1
min_diff = float('inf)

for i in range(1, n):
    diff = abs(2 * sum(arr[:i]) - total_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)