n = int(input())
vec = [int(input()) for _ in range(n)]
total_sum = sum(vec)
half_sum = total_sum // 2
left_sum = 0
for i, num in enumerate(vec):
    left_sum += num
    if left_sum >= half_sum:
        if left_sum == half_sum or abs(left_sum - half_sum) < abs(
            left_sum - num - half_sum
        ):
            print(*vec[: i + 1])
            print(*vec[i + 1 :])
            break