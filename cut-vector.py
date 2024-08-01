n = int(input())
vector = [int(input()) for _ in range(n)]

total_sum = sum(vector)
half_sum = total_sum // 2
prefix_sum = 0

for i, num in enumerate(vector):
    prefix_sum += num
    if prefix_sum >= half_sum:
        if prefix_sum == half_sum or abs(prefix_sum - half_sum) < abs(
            prefix_sum - num - half_sum
        ):
            print(*vector[: i + 1])
            print(*vector[i + 1 :])
            break