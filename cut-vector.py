n = int(input())
v = [int(input()) for _ in range(n)]
total_sum = sum(v)
half_sum = total_sum // 2
prefix_sum = 0
for i in range(n):
    prefix_sum += v[i]
    if prefix_sum >= half_sum:
        if prefix_sum == half_sum or abs(prefix_sum - half_sum) < abs(
            prefix_sum - v[i] - half_sum
        ):
            print(*v[: i + 1])
            print(*v[i + 1 :])
        else:
            print(*v[:i])
            print(*v[i:])
        break