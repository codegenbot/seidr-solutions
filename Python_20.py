while True:
    try:
        numbers = list(map(float, input("Enter space-separated floating-point numbers: ").split()))
        if not numbers:
            print("Input should not be empty")
            continue
        result = sum(numbers) / len(numbers)
        print(f"Average of numbers: {result}")
        break
    except ValueError:
        print("Input should contain valid floating-point numbers")