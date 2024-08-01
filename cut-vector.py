n = int(input())
vector = [int(input()) for _ in range(n)]

total_sum = sum(vector)
left_sum = 0
min_diff = abs(total_sum - 2 * vector[0])
cut_position = 0

for i in range(n):
    left_sum += vector[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_position = i

output_left = vector[: cut_position + 1]
output_right = vector[cut_position + 1 :]

print(*output_left)
print(*output_right)