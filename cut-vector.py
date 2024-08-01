n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
half_sum = total_sum // 2
current_sum = 0
for i, num in enumerate(v):
    current_sum += num
    if current_sum >= half_sum:
        if current_sum == half_sum:
            print(*v[: i + 1])
            print(*v[i + 1 :])
        else:
            if abs(current_sum - half_sum) < abs(current_sum - num - half_sum):
                print(*v[: i + 1])
                print(*v[i + 1 :])
            else:
                print(*v[:i])
                print(*v[i:])
        break
else:
    print(*v)
    print(0)