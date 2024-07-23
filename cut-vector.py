n = int(input())
a = [int(input()) for i in range(n)]

total_sum = sum(a)
half_sum = total_sum // 2

prefix_sum = 0
for i in range(n):
    prefix_sum += a[i]
    if prefix_sum == half_sum or (
        prefix_sum < half_sum and prefix_sum + a[i + 1] > half_sum
    ):
        print(*a[: i + 1])
        print(*a[i + 1 :])
        break
else:
    print(*a)
    print(0)