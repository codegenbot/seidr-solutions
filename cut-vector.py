n = int(input())
vec = [int(input()) for _ in range(n)]
total_sum = sum(vec)
left_sum = 0
for i in range(n):
    left_sum += vec[i]
    right_sum = total_sum - left_sum
    if left_sum == right_sum or abs(left_sum - right_sum) < abs(
        left_sum - right_sum - vec[i]
    ):
        print(vec[: i + 1])
        print(vec[i + 1 :])
        break