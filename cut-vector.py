n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
half_sum = total_sum // 2

prefix_sum = 0
for i, num in enumerate(v):
    prefix_sum += num
    if prefix_sum >= half_sum:
        if prefix_sum == half_sum or prefix_sum - num <= half_sum:
            print(*v[: i + 1])
            print(*v[i + 1 :])
            break