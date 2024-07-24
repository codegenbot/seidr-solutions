n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
right_sum = total_sum
min_diff = float('inf')  # Initialize min_diff with a large value
cut_index = 0

for i in range(1, n):
    right_sum -= arr[i-1]
    diff = abs(sum(arr[:i]) - right_sum)
    if diff <= min_diff:  # Update the condition to include 'equal'
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index+1]
subvector2 = arr[cut_index+1:]

print(*subvector1)
print(*subvector2)