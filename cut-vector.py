n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
min_diff = abs(sum(arr[:n//2]) - sum(arr[n//2:]))
cut_index = n//2

for i in range(1, n):
    left_sum = sum(arr[:i])
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)