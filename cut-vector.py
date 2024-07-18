n = int(input())
vector = [int(input()) for _ in range(n)]

total_sum = sum(vector)
left_sum = 0

for i in range(n):
    left_sum += vector[i]
    right_sum = total_sum - left_sum
    if left_sum == right_sum or abs(left_sum - right_sum) < abs(
        (left_sum + vector[i]) - (right_sum - vector[i])
    ):
        break

print(*vector[: i + 1])
print(*vector[i + 1 :])