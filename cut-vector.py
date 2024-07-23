n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
min_diff = float('inf')
cut_index = -1

for i in range(n+1):
    diff = abs(sum(arr[:i]) - sum(arr[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)