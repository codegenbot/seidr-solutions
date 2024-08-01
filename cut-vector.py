n = int(input())
a = [int(input()) for _ in range(n)]

total_sum = sum(a)
half_sum = total_sum // 2
current_sum = 0
for i, num in enumerate(a):
    current_sum += num
    if current_sum >= half_sum:
        if current_sum == half_sum:
            print(*a[: i + 1])
            print(*a[i + 1 :])
            break
        elif current_sum - half_sum < half_sum - (current_sum - num):
            print(*a[: i + 1])
            print(*a[i + 1 :])
            break