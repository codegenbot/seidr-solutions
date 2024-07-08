```
import statistics

def mean_absolute_deviation(numbers):
    if len(numbers) == 0:
        return None
    total = 0
    count = 0
    mean_val = statistics.mean(numbers)
    for num in numbers:
        total += abs(num - mean_val)
        count += 1
    return total / count

numbers = []
while True:
    user_input = input("Enter space-separated numbers (or 'done' if finished): ")
    if user_input.lower() == 'done':
        break
    numbers.extend([float(num) for num in user_input.split()])
print(mean_absolute_deviation(numbers))