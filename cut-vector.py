n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
half_sum = total_sum // 2
cum_sum = 0
for i, num in enumerate(v):
    cum_sum += num
    if cum_sum >= half_sum:
        if cum_sum == half_sum or abs(cum_sum - half_sum) < abs(
            cum_sum - num - half_sum
        ):
            print(*v[: i + 1])
            print(*v[i + 1 :])
        else:
            print(*v[:i])
            print(*v[i:])
        break