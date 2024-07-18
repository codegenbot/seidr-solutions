n = int(input())
a = [int(input()) for _ in range(n)]

total_sum = sum(a)
half_sum = total_sum // 2
curr_sum = 0
idx = -1

for i in range(n):
    curr_sum += a[i]
    if curr_sum >= half_sum:
        idx = i
        break

if abs(curr_sum - half_sum) < abs(curr_sum - a[idx] - half_sum):
    idx -= 1

print(*a[: idx + 1])
print(*a[idx + 1 :])