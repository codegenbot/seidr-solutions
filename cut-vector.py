n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
cut_index = -1
min_diff = float('inf')

curr_sum = 0
for i in range(n - 1, 0, -1):
    curr_sum += arr[i]
    diff = abs(2 * curr_sum - total_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print()
print(*subvector2)