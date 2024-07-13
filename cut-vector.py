n = int(input())
numbers = []
for _ in range(n):
    numbers.append(int(input()))

total_sum = sum(numbers)
half_sum = total_sum // 2
left_sum = 0
idx = 0
for i, num in enumerate(numbers):
    left_sum += num
    if left_sum >= half_sum:
        idx = i
        break

if abs(left_sum - (total_sum - left_sum)) < abs(
    left_sum - (total_sum - left_sum - numbers[idx])
):
    print(numbers[: idx + 1])
    print(numbers[idx + 1 :])
else:
    print(numbers[:idx])
    print(numbers[idx:])