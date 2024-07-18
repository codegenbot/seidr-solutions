n = int(input())
numbers = [int(input()) for _ in range(n)]
min_diff = float("inf")
cut_index = -1

for i in range(1, n):
    diff = abs(sum(numbers[:i]) - sum(numbers[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*numbers[:cut_index])
print(*numbers[cut_index:])