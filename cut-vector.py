n = int(input())
a = list(map(int, input().split()))

total_sum = sum(a)
half_sum = total_sum // 2

prefix_sum = 0
for i in range(n):
    prefix_sum += a[i]
    if prefix_sum == half_sum or abs(2 * prefix_sum - total_sum) < abs(total_sum - 2 * prefix_sum):
        print(*a[: i + 1], sep="\n")
        print(*a[i:], sep="\n")  # Corrected line
        break