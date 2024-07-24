n = int(input())
v = [int(input()) for _ in range(n)]
total_sum = sum(v)
prefix_sum = 0
diff = float("inf")
cut_index = -1
for i in range(n):
    prefix_sum += v[i]
    suffix_sum = total_sum - prefix_sum
    current_diff = abs(prefix_sum - suffix_sum)
    if current_diff < diff:
        diff = current_diff
        cut_index = i
print(*v[: cut_index + 1])
print(*v[cut_index + 1 :])