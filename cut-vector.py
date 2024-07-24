n = int(input())
vector = [int(input()) for _ in range(n)]

total_sum = sum(vector)
current_sum = 0
min_diff = float("inf")
cut_idx = 0

for i in range(n):
    current_sum += vector[i]
    diff = abs(current_sum - (total_sum - current_sum))
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

subvector1 = vector[: cut_idx + 1]
subvector2 = vector[cut_idx + 1 :]

print(*subvector1)
print(*subvector2)