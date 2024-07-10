n = int(input())
a = list(map(int, input().split()))

total_sum = sum(a)
half_sum = total_sum // 2

prefix_sum = 0
for i in range(n):
    prefix_sum += a[i]
    if prefix_sum >= half_sum:
        if prefix_sum == half_sum or abs(total_sum - 2 * prefix_sum) < abs(total_sum - 2 * (prefix_sum - a[i])):
            print(*a[: i + 1], sep="\n")
            print(*a[i + 1 :], sep="\n")
        else:
            print(*a[:i], sep="\n")
            print(*a[i:], sep="\n")
        break