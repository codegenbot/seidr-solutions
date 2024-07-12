n = int(input())
arr = list(map(int, input().split()))

left_sum = sum(arr)
right_sum = 0
min_diff = abs(left_sum - right_sum)
cut_index = 0

for i in range(n):
    left_sum -= arr[i]
    right_sum += arr[i]
    diff = abs(left_sum - right_sum)

    if diff < min_diff:
        min_diff = diff
        cut_index = i + 1

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)