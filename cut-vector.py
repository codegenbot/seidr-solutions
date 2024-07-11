n = int(input())
a = [int(input()) for _ in range(n)]

total_sum = sum(a)
half_sum = total_sum // 2

curr_sum = 0
idx = 0
for i in range(n):
    curr_sum += a[i]
    if curr_sum >= half_sum:
        idx = i
        break

if abs(total_sum - 2 * curr_sum) < abs(total_sum - 2 * (curr_sum - a[idx])):
    print(*a[: idx + 1])
    print(*a[idx + 1 :])
else:
    print(*a[:idx])
    print(*a[idx:])