n = int(input())
v = [int(input()) for _ in range(n)]

diff = float("inf")
cut_index = -1

for i in range(1, n):
    left_sum = sum(v[:i])
    right_sum = sum(v[i:])
    current_diff = abs(left_sum - right_sum)

    if current_diff < diff:
        diff = current_diff
        cut_index = i

print(*v[:cut_index])
print(*v[cut_index:])