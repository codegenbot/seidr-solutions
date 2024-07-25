numbers_input = input("Enter space-separated floating-point numbers: ")
if numbers_input:
    numbers = list(map(float, numbers_input.split()))
    result = sum(numbers) / len(numbers)
    print(f"Average of numbers: {result}")
else:
    print("Input should not be empty")