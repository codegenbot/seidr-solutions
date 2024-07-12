n = int(input())
arr = [int(input()) for _ in range(n)]

diff = float("inf")
cut_index = -1

for i in range(1, n):
    left_sum = sum(arr[:i])
    right_sum = sum(arr[i:])
    curr_diff = abs(left_sum - right_sum)

    if curr_diff < diff:
        diff = curr_diff
        cut_index = i

print(*arr[:cut_index])
print(*arr[cut_index:])