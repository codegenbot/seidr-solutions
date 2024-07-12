n = int(input())
arr = list(map(int, input().split()))

left_sum = 0
right_sum = sum(arr)
min_diff = float('inf')
cut_index = -1

for i in range(n):
    left_sum += arr[i]
    right_sum -= arr[i]
    diff = abs(left_sum - right_sum)

    if diff < min_diff or (diff == min_diff and right_sum < left_sum):
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index+1]
subvector2 = arr[cut_index+1:]

print(*subvector1)
print(*subvector2)