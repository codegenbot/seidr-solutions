n = int(input())
a = [int(input()) for _ in range(n)]

total_sum = sum(a)
half_sum = total_sum // 2

current_sum = 0
for i, num in enumerate(a):
    current_sum += num
    if current_sum >= half_sum:
        if current_sum == half_sum or abs(current_sum - half_sum) < abs(
            current_sum - num - half_sum
        ):
            print(*a[: i + 1])
            print(*a[i + 1 :])
        else:
            print(*a[:i])
            print(*a[i:])
        break