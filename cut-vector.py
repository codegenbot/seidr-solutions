n = int(input())
arr = [int(input()) for _ in range(n)]

diff = float("inf")
cut_idx = -1
for i in range(1, n):
    curr_diff = abs(sum(arr[:i]) - sum(arr[i:]))
    if curr_diff <= diff:
        diff = curr_diff
        cut_idx = i

print(*arr[:cut_idx])
print(*arr[cut_idx:])