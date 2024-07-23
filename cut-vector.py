n = int(input())
vec = [int(input()) for _ in range(n)]

diff = float("inf")
cut_index = -1

for i in range(1, n):
    left_sum = sum(vec[:i])
    right_sum = sum(vec[i:])

    current_diff = abs(left_sum - right_sum)
    if current_diff < diff:
        diff = current_diff
        cut_index = i

print(*vec[:cut_index])
print(*vec[cut_index:])