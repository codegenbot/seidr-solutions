n = int(input())
a = list(map(int, input().split()))

total_sum = sum(a)
half_sum = total_sum // 2

prefix_sum = 0
for i in range(n):
    prefix_sum += a[i]
    if prefix_sum >= half_sum:
        if abs(2 * prefix_sum - total_sum) <= abs(2 * (prefix_sum - a[i]) - total_sum):
            print(*a[: i + 1], sep="\n")
            print(*a[i + 1 :], sep="\n")
        else:
            print(*a[:i], sep="\n")
            print(*a[i:], sep="\n")
        break