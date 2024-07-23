n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
left_sum = 0
min_diff = abs(arr[0] - total_sum + arr[0])
cut_index = 1

for i in range(1, n):
    diff = abs(left_sum - (total_sum - left_sum))
    if diff < min_diff:
        min_diff = diff
        cut_index = i
    left_sum += arr[i]

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)