n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
half_sum = total_sum // 2
current_sum = 0
idx = 0

for i, num in enumerate(v):
    current_sum += num
    if current_sum >= half_sum:
        idx = i
        break

if current_sum - half_sum < half_sum - (current_sum - num):
    print(v[: idx + 1])
    print(v[idx + 1 :])
else:
    print(v[:idx])
    print(v[idx:])