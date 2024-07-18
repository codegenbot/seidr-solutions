n = int(input())
numbers = [int(input()) for _ in range(n)]

total_sum = sum(numbers)
half_sum = total_sum // 2
current_sum = 0
idx = 0

for i, num in enumerate(numbers):
    current_sum += num
    if current_sum >= half_sum:
        idx = i
        break

if current_sum - half_sum < half_sum - (current_sum - num):
    print(*numbers[: idx + 1])
    print(*numbers[idx + 1 :])
else:
    print(*numbers[:idx])
    print(*numbers[idx:])