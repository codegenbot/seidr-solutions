def add(numbers):
    return sum(numbers)

print("Enter numbers separated by spaces:")
numbers = [int(num) for num in input("Enter numbers separated by spaces: ").split()]
result = add(numbers)
print(result)