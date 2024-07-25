try:
    numbers_input = input("Enter space-separated floating-point numbers: ").strip()
    numbers = list(map(float, numbers_input.split()))

    if len(numbers) < 2:
        raise ValueError("At least 2 floating-point numbers are required")

    result = sum(numbers) / len(numbers)
    print(f"Average of numbers: {result}")

except ValueError as e:
    print(str(e))