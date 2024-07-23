n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
left_sum = 0
right_sum = total_sum

for i in range(n):
    left_sum += v[i]
    right_sum -= v[i]
    if left_sum == right_sum or abs(left_sum - right_sum) < abs(
        (left_sum - v[i]) - (right_sum + v[i])
    ):
        print(*v[: i + 1])
        print(*v[i + 1 :])
        break