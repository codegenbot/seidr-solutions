def add(numbers):
    return sum(numbers)

print("Enter numbers separated by spaces:")
numbers = list(map(int, input().split()))
result = add(numbers)
print("Result:", result)