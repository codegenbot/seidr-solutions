n = int(input())
a = [int(input()) for _ in range(n)]

total_sum = sum(a)
half_sum = total_sum / 2
current_sum = 0
for i in range(n):
    current_sum += a[i]
    if current_sum >= half_sum:
        break

if abs(total_sum - 2 * current_sum) <= abs(total_sum - 2 * (current_sum - a[i])):
    print(*a[: i + 1])
    print(*a[i + 1 :])
else:
    print(*a[:i])
    print(*a[i:])