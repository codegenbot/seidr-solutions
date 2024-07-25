while True:
    try:
        numbers_input = input("Enter space-separated floating-point numbers: ")
        if not numbers_input:
            print("No input provided. Please enter numbers.")
            continue
        numbers = list(map(float, numbers_input.split()))
        if not numbers:
            print(
                "Input should contain valid floating-point numbers. Please try again."
            )
            continue
        result = sum(numbers) / len(numbers)
        print(f"Average of numbers: {result}")
        break
    except ValueError:
        print(
            "Invalid input. Please enter valid floating-point numbers separated by spaces."
        )