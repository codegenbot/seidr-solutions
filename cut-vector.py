n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
right_sum = total_sum - arr[0]
min_diff = abs(arr[0] - sum(arr[1:]))
cut_index = 0

for i in range(1, n-1):
    right_sum -= arr[i-1]
    diff = abs(sum(arr[:i]) - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index+1]
subvector2 = arr[cut_index+1:]

print(*subvector1)
print(*subvector2)