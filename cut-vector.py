n = int(input())
numbers = [int(input()) for _ in range(n)]

total_sum = sum(numbers)
half_sum = total_sum // 2
left_sum = 0
cut_index = 0

for i, num in enumerate(numbers):
    left_sum += num
    if left_sum >= half_sum:
        cut_index = i
        break

if abs(total_sum - 2 * left_sum) < abs(total_sum - 2 * (left_sum - num)):
    cut_index += 1

print(numbers[: cut_index + 1])
print(numbers[cut_index + 1 :])