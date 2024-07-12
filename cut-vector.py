n = int(input())
vector = [int(input()) for _ in range(n)]
min_diff = float("inf")
cut_idx = 0

for i in range(1, n):
    diff = abs(sum(vector[:i]) - sum(vector[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

print(*vector[:cut_idx])
print(*vector[cut_idx:])