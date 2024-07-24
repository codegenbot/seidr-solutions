n = int(input())
a = [int(input()) for _ in range(n)]

total_sum = sum(a)
half_sum = total_sum // 2
current_sum = 0
idx = 0
while current_sum < half_sum:
    current_sum += a[idx]
    idx += 1

if current_sum == half_sum:
    print(*a[:idx])
    print(*a[idx:])
else:
    if current_sum - half_sum < half_sum - (current_sum - a[idx]):
        print(*a[:idx])
        print(*a[idx:])
    else:
        print(*a[: idx - 1])
        print(*a[idx - 1 :])