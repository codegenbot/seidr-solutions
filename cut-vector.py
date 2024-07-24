n = int(input())
a = [int(input()) for _ in range(n)]

total_sum = sum(a)
half_sum = total_sum // 2
current_sum = 0
idx = 0

for i, num in enumerate(a):
    current_sum += num
    if current_sum >= half_sum:
        idx = i
        break

if current_sum == half_sum or current_sum - half_sum < half_sum - (current_sum - num):
    print(*a[: idx + 1])
    print(*a[idx + 1 :])
else:
    print(*a[:idx])
    print(*a[idx:])