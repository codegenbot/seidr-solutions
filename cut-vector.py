numbers = list(map(int, input().split()))

total_sum = sum(numbers)
half_sum = total_sum // 2
current_sum = 0
index = 0

for i, num in enumerate(numbers):
    current_sum += num
    if current_sum >= half_sum:
        index = i
        break

if current_sum - half_sum < half_sum - (current_sum - num):
    print(numbers[: index + 1])
    print(numbers[index + 1 :])
else:
    print(numbers[:index])
    print(numbers[index:])