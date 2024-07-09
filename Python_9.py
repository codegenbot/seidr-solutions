def rolling_max(numbers):
    return [max(numbers[i : i + 3]) for i in range(len(numbers) - 2]

print("Enter numbers separated by spaces:")
numbers = list(map(int, input().split()))
print(rolling_max(numbers))