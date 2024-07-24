n = int(input())
a = []
for i in range(n):
    a.append(int(input()))

total_sum = sum(a)
left_sum = 0
min_diff = float("inf")
cut_index = -1

for i in range(n):
    left_sum += a[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = a[: cut_index + 1]
subvector2 = a[cut_index + 1 :]

print(*subvector1)
print(*subvector2)