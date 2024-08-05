n = int(input())
vector = list(map(int, input().split()))
total_sum = sum(vector)
half_sum = total_sum // 2
running_sum = 0
for i, num in enumerate(vector):
    running_sum += num
    if running_sum >= half_sum:
        if running_sum == half_sum or abs(running_sum - half_sum) < abs(
            running_sum - num - half_sum
        ):
            print(*vector[: i + 1])
            print(*vector[i + 1 :])
            break