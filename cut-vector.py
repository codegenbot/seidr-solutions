n = int(input())
arr = list(map(int, input().split()))

left_sum = sum(arr)
right_sum = 0
min_diff = float('inf')
cut_index = -1

for i in range(n):
    left_sum -= arr[i]
    right_sum += arr[i]
    diff = abs(left_sum - right_sum)

    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index+1] if abs(sum(arr[:cut_index+1]) - sum(arr[cut_index+1:])) <= abs(sum(arr[:cut_index]) - sum(arr[cut_index:])) else arr[:cut_index]
subvector2 = arr[cut_index:] if abs(sum(arr[:cut_index+1]) - sum(arr[cut_index+1:])) <= abs(sum(arr[:cut_index]) - sum(arr[cut_index:])) else arr[cut_index:]

print(*subvector1)
print(*subvector2)