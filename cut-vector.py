n = int(input())
a = list(map(int, input().split()))

total_sum = sum(a)
half_sum = total_sum // 2
prefix_sum = 0
idx = -1

for i in range(n):
    prefix_sum += a[i]
    if prefix_sum >= half_sum:
        idx = i
        break

if prefix_sum == half_sum:
    print(a[: idx + 1])
    print(a[idx + 1 :])
else:
    if abs(prefix_sum - half_sum) < abs(prefix_sum - a[idx] - half_sum):
        print(a[: idx + 1])
        print(a[idx + 1 :])
    else:
        print(a[:idx])
        print(a[idx:])