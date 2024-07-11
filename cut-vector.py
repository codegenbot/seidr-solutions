numbers = list(map(int, input().split()))
min_diff = float("inf")
cut_index = 0

for i in range(len(numbers) + 1):
    sum_left = sum(numbers[:i])
    sum_right = sum(numbers[i:])
    diff = abs(sum_left - sum_right)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(numbers[:cut_index], numbers[cut_index:])