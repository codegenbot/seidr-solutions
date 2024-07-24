n = int(input())
numbers = [int(input()) for _ in range(n)]

total_sum = sum(numbers)
target_sum = total_sum // 2

prefix_sum = 0
min_diff = float("inf")
cut_idx = -1

for i, num in enumerate(numbers):
    prefix_sum += num
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

print(*numbers[: cut_idx + 1])
print(*numbers[cut_idx + 1 :])