n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
half_sum = total_sum // 2
left_sum = 0
cut_index = 0

for i in range(n):
    left_sum += v[i]
    if left_sum >= half_sum:
        cut_index = i
        break

if abs(left_sum - (total_sum - left_sum)) < abs(
    left_sum - v[cut_index] - (total_sum - left_sum + v[cut_index])
):
    print(*v[: cut_index + 1])
    print(*v[cut_index + 1 :])
else:
    print(*v[:cut_index])
    print(*v[cut_index:])