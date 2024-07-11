numbers = list(map(int, input().split()))
min_diff = float('inf')
cut_index = 0
for i in range(1, len(numbers) + 1):
    diff = abs(sum(numbers[:i]) - sum(numbers[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(numbers[:cut_index], numbers[cut_index:])