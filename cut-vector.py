n = int(input())
vec = []
for _ in range(n):
    vec.append(int(input()))

diff = float("inf")
idx = 0

for i in range(1, n):
    curr_diff = abs(sum(vec[:i]) - sum(vec[i:]))
    if curr_diff < diff:
        diff = curr_diff
        idx = i

print(*vec[:idx])
print(*vec[idx:])