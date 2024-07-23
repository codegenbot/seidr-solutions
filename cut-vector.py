numbers = list(map(int, input().split()))
total_sum = sum(numbers)
half_sum = total_sum // 2
cumulative_sum = 0
index = 0

for i, num in enumerate(numbers):
    cumulative_sum += num
    if cumulative_sum >= half_sum:
        index = i
        break

if abs(cumulative_sum - half_sum) < abs(cumulative_sum - num - half_sum):
    index += 1

print(numbers[: index + 1])
print(numbers[index + 1 :])