n = int(input())
vector = [int(input()) for _ in range(n)]
total_sum = sum(vector)
cum_sum = 0
min_diff = total_sum
result_idx = 0

for i in range(n):
    cum_sum += vector[i]
    diff = abs(total_sum - 2 * cum_sum)
    if diff <= min_diff:
        min_diff = diff
        result_idx = i

subvector1 = vector[: result_idx + 1]
subvector2 = vector[result_idx + 1 :]

print(*subvector1)
print(*subvector2)