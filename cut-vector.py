n = int(input())
vector = [int(input()) for _ in range(n)]

total_sum = sum(vector)
current_sum = 0
min_diff = total_sum
cut_index = 0

for i in range(n):
    current_sum += vector[i]
    diff = abs(total_sum - 2 * current_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = vector[: cut_index + 1]
subvector2 = vector[cut_index + 1 :]

print(*subvector1)
print(*subvector2)