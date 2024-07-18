n = int(input())
a = [int(input()) for _ in range(n)]
total_sum = sum(a)
half_sum = total_sum // 2
running_sum = 0
for i, num in enumerate(a):
    running_sum += num
    if running_sum >= half_sum:
        if running_sum == half_sum or abs(total_sum - 2 * running_sum) < abs(
            total_sum - 2 * (running_sum - num)
        ):
            print(*a[: i + 1])
            print(*a[i + 1 :])
            break