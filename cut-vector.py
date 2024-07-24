n = int(input())
v = [int(input()) for _ in range(n)]
total_sum = sum(v)
half_sum = total_sum // 2
curr_sum = 0
idx = 0

for i, num in enumerate(v):
    curr_sum += num
    if curr_sum >= half_sum:
        idx = i
        break

if abs(curr_sum - half_sum) < abs(curr_sum - num - half_sum):
    idx += 1

print(*v[: idx + 1])
print(*v[idx + 1 :])