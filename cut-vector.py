n = int(input())
vec = list(map(int, input().split()))

diff = float("inf")
cut_index = 0

for i in range(1, n):
    curr_diff = abs(sum(vec[:i]) - sum(vec[i:]))
    if curr_diff < diff:
        diff = curr_diff
        cut_index = i

print(*vec[:cut_index])
print(*vec[cut_index:])