n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
min_diff = -1
cut_index = -1
left_sum = 0
right_sum = total_sum

for i in range(1, n-1):
    left_sum += arr[i-1]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if min_diff == -1 or diff < min_diff:
        min_diff = diff
        cut_index = i

diff_last = abs((total_sum - arr[-1]) - arr[-1])
if min_diff == -1 or diff_last < min_diff:
    cut_index = n-1
    min_diff = diff_last

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)