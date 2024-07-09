def add(numbers: list):
    return sum(numbers)

try:
    numbers = [int(num) for num in input("Enter integers separated by space: ").split()]
    result = add(numbers)
    print(result)
except ValueError:
    print("Invalid input. Please enter integers only.")