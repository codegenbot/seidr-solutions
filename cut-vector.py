n = int(input())
a = [int(input()) for _ in range(n)]
total_sum = sum(a)
running_sum = 0
for i in range(n):
    running_sum += a[i]
    if running_sum * 2 >= total_sum:
        if running_sum * 2 == total_sum:
            print(*a[: i + 1])
            print(*a[i + 1 :])
        else:
            if abs(running_sum * 2 - total_sum) < abs(
                (running_sum - a[i]) * 2 - total_sum
            ):
                print(*a[: i + 1])
                print(*a[i + 1 :])
            else:
                print(*a[:i])
                print(*a[i:])
        break