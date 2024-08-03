n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
half_sum = total_sum // 2
running_sum = 0
for i, num in enumerate(v):
    running_sum += num
    if running_sum >= half_sum:
        if running_sum == half_sum or abs(total_sum - 2 * running_sum) < abs(
            total_sum - 2 * (running_sum - num)
        ):
            print(v[: i + 1])
            print(v[i + 1 :])
            break