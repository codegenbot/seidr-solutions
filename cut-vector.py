n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
right_sum = total_sum
min_diff = abs(arr[0] - sum(arr[1:]))
cut_index = 0

for i in range(n-1):
    right_sum -= arr[i]
    diff = abs(sum(arr[:i+1]) - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i + 1

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)