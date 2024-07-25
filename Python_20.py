try:
    numbers_input = input("Enter space-separated floating-point numbers: ")
    numbers = list(map(float, numbers_input.split()))
    result = sum(numbers) / len(numbers)
    print(f"Average of numbers: {result}")
except:
    print("Invalid input. Please enter valid space-separated floating-point numbers.")