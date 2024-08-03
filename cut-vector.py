n = int(input())
vec = [int(input()) for _ in range(n)]

total_sum = sum(vec)
left_sum = 0
min_diff = float("inf")
cut_idx = -1

for i in range(n):
    left_sum += vec[i]
    right_sum = total_sum - left_sum
    curr_diff = abs(left_sum - right_sum)
    if curr_diff < min_diff or (curr_diff == min_diff and vec[i] == vec[i + 1]):
        min_diff = curr_diff
        cut_idx = i

print(vec[: cut_idx + 1])
print(vec[cut_idx + 1 :])