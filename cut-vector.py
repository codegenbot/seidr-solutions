n = int(input())
array = [int(input()) for _ in range(n)]

total_sum = sum(array)
left_sum = 0
right_sum = total_sum
min_diff = float("inf")
cut_index = -1

for i in range(n):
    left_sum += array[i]
    right_sum -= array[i]
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = array[: cut_index + 1]
subvector2 = array[cut_index + 1 :]

print(*subvector1)
print(*subvector2)