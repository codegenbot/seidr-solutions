n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
half_sum = total_sum // 2
current_sum = 0
idx = 0

while current_sum < half_sum:
    current_sum += v[idx]
    idx += 1

if current_sum == half_sum:
    print(*v[:idx])
    print(*v[idx:])
else:
    if current_sum - half_sum < half_sum - current_sum + v[idx]:
        print(*v[:idx])
        print(*v[idx:])
    else:
        print(*v[: idx - 1])
        print(*v[idx - 1 :])