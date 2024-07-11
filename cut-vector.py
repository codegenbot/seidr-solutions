n = int(input())
numbers = [int(input()) for _ in range(n)]
total_sum = sum(numbers)
half_sum = total_sum // 2
prefix_sum = 0
for i, num in enumerate(numbers):
    prefix_sum += num
    if prefix_sum >= half_sum:
        if prefix_sum == half_sum or abs(prefix_sum - half_sum) < abs(
            prefix_sum - num - half_sum
        ):
            print(*numbers[: i + 1])
            print(*numbers[i + 1 :])
        else:
            print(*numbers[:i])
            print(*numbers[i:])
        if i == n - 1:
            break