n = int(input())
vec = []
for i in range(n):
    vec.append(int(input()))

min_diff = float("inf")
cut_index = -1
for i in range(1, n):
    diff = abs(sum(vec[:i]) - sum(vec[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*vec[:cut_index])
print(*vec[cut_index:])