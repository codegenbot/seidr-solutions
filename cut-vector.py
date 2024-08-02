v = list(map(int, input().split()))
total_sum = sum(v)
half_sum = total_sum // 2
prefix_sum = 0
for i, num in enumerate(v):
    prefix_sum += num
    if prefix_sum >= half_sum:
        if prefix_sum == half_sum or abs(total_sum - 2 * prefix_sum) < abs(total_sum - 2 * (prefix_sum - num)):
            print(*v[:i+1])
            print(*v[i+1:])
        else:
            print(*v[:i])
            print(*v[i:])
        break