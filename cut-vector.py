n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
min_diff = abs(arr[0] - total_sum + arr[0])
cut_index = 0

for i in range(1, n - 1):
    diff = abs(sum(arr[:i]) - total_sum + sum(arr[:i]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*arr[:cut_index+1])
print(*arr[cut_index+1:])