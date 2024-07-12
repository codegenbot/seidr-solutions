n = int(input())
arr = list(map(int, input().split()))

cut_index = 0
min_diff = float('inf')

for i in range(n):
    left_sum = sum(arr[:i+1])
    right_sum = sum(arr[i+1:])
    diff = abs(left_sum - right_sum)

    if diff < min_diff:
        min_diff = diff
        cut_index = i+1

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)