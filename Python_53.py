def add(numbers):
    return sum(numbers)


numbers = list(map(int, input("Enter numbers separated by spaces: ").split()))
result = add(numbers)
print(f"The sum is {result}")