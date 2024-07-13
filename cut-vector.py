n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
half_sum = total_sum // 2

left_sum = 0
for i in range(n):
    left_sum += v[i]
    if left_sum >= half_sum:
        break

if abs(total_sum - 2 * left_sum) < abs(total_sum - 2 * (left_sum - v[i])):
    print(*v[: i + 1])
    print(*v[i + 1 :])
else:
    print(*v[:i])
    print(*v[i:])