n = int(input())
a = [int(input()) for i in range(n)]
total_sum = sum(a)
target_sum = total_sum / 2
current_sum = 0
for i in range(n):
    current_sum += a[i]
    if current_sum >= target_sum:
        if current_sum == target_sum or abs(current_sum - target_sum) < abs(
            current_sum - a[i] - target_sum
        ):
            print(a[: i + 1])
            print(a[i + 1 :])
            break