n = int(input())
numbers = [int(input()) for _ in range(n)]

total_sum = sum(numbers)
left_sum = 0
right_sum = total_sum
min_diff = float("inf")
cut_idx = -1

for i in range(n):
    left_sum += numbers[i]
    right_sum -= numbers[i]
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

output_1 = numbers[: cut_idx + 1]
output_2 = numbers[cut_idx + 1 :]

print(*output_1, sep="\n")
print(*output_2, sep="\n")