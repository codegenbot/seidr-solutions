vec = list(map(int, input().split()))

min_diff = float("inf")
cut_index = 0

for i in range(1, len(vec)):
    diff = abs(sum(vec[:i]) - sum(vec[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*vec[:cut_index])
print(*vec[cut_index:])