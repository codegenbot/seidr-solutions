n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
half_sum = total_sum / 2
residual = 0
for i in range(n):
    residual += v[i]
    if residual >= half_sum:
        if residual == half_sum or abs(total_sum - 2 * residual) < abs(
            total_sum - 2 * (residual - v[i])
        ):
            print(*v[: i + 1])
            print(*v[i + 1 :])
            break