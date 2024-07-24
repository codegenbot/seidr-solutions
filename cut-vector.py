n = int(input())
array = [int(input()) for _ in range(n)]

diff = float("inf")
cut_index = -1

for i in range(1, n):
    left_sum = sum(array[:i])
    right_sum = sum(array[i:])

    current_diff = abs(left_sum - right_sum)

    if current_diff < diff:
        diff = current_diff
        cut_index = i

print(*array[:cut_index])
print(*array[cut_index:])