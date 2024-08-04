v = list(map(int, input().split()))

total_sum = sum(v)
half_sum = total_sum // 2

prefix_sum = 0
for i, num in enumerate(v):
    prefix_sum += num
    if prefix_sum >= half_sum:
        if prefix_sum == half_sum or abs(prefix_sum - half_sum) < abs(
            prefix_sum - num - half_sum
        ):
            print(*v[: i + 1])
            print(*v[i + 1 :])
            break