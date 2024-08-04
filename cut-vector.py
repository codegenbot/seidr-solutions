n = int(input())
v = [int(input()) for _ in range(n)]
total_sum = sum(v)
half_sum = total_sum // 2
current_sum = 0
for i in range(n):
    current_sum += v[i]
    if current_sum >= half_sum:
        if current_sum == half_sum or current_sum - half_sum < half_sum - (
            current_sum - v[i]
        ):
            print(*v[: i + 1])
            print(*v[i + 1 :])
            break