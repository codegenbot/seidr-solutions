try:
    numbers_input = raw_input("Enter space-separated floating-point numbers: ")
    numbers = list(map(float, numbers_input.split()))
    result = sum(numbers) / len(numbers)
    print(f"Average of numbers: {result}")
except:
    print("Input should not be empty or should contain valid floating-point numbers")