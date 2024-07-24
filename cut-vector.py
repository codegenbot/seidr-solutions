n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
min_diff = float('inf')
cut_index = -1
left_sum = 0
right_sum = total_sum

for i in range(n):
    right_sum -= arr[i]
    diff = abs(left_sum - right_sum)
    
    if diff < min_diff:
        min_diff = diff
        cut_index = i

    left_sum += arr[i]

subvector1 = arr[:cut_index+1]
subvector2 = arr[cut_index+1:]

print(*subvector1)
print(*subvector2)