n = int(input())
numbers = [int(input()) for _ in range(n)]
total_sum = sum(numbers)
current_sum = 0
for i in range(n):
    current_sum += numbers[i]
    remaining_sum = total_sum - current_sum
    if current_sum == remaining_sum or abs(current_sum - remaining_sum) < abs(
        result[0] - result[1]
    ):
        result = (current_sum, remaining_sum)
print(result[0])
print(result[1])