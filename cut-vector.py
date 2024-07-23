numbers = [int(input()) for _ in range(2)]
total_sum = sum(numbers)
left_sum = 0
min_diff = total_sum
cut_index = -1

for i in range(len(numbers)):
    left_sum += numbers[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*numbers[: cut_index + 1])
print(*numbers[cut_index + 1 :])