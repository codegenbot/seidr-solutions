def add(numbers):
    return sum(numbers)

print("Enter numbers separated by spaces:")
numbers = [int(num) for num in input().strip().split()]
result = add(numbers)
print(result)