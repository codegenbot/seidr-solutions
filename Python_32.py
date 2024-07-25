while True:
    try:
        numbers = list(map(int, input("Enter space-separated numbers: ").split()))
        if len(numbers) < 2:
            raise ValueError("Please provide at least two numbers")
        
        total = sum(numbers)
        print("Sum of the numbers:", total)
        break

    except ValueError as e:
        print(f"Invalid input: {e}")