while True:
    try:
        numbers_input = input("Enter space-separated floating-point numbers: ")
        if not numbers_input:
            print("Input should not be empty")
            continue
        numbers = list(map(float, numbers_input.split()))
        if not numbers:
            print("Input should contain valid floating-point numbers")
            continue
        result = sum(numbers) / len(numbers)
        print(f"Average of numbers: {result}")
        break
    except ValueError:
        print("Input should contain valid floating-point numbers")