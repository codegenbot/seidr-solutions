n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
left_sum = 0
right_sum = total_sum
min_diff = float("inf")
cut_index = 0

for i in range(n - 1):
    left_sum += arr[i]
    right_sum -= arr[i]
    diff1 = abs(left_sum - right_sum)

    left_sum += arr[i + 1]
    right_sum -= arr[i + 1]
    diff2 = abs(left_sum - right_sum)

    if min(diff1, diff2) < min_diff:
        min_diff = min(diff1, diff2)
        cut_index = i

subvector1 = arr[:cut_index + 2]
subvector2 = arr[cut_index + 2]

print(*subvector1)
print(*subvector2)  