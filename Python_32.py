while True:
    try:
        numbers = list(map(int, input("Enter space-separated numbers: ").split()))
        if not all(isinstance(num, int) for num in numbers if num != ''):
            raise ValueError("Non-integer value provided")
        if not numbers:
            raise ValueError("No numbers provided")
        
        if len(numbers) > 0:
            total = sum(numbers)
            print("Sum of the numbers:", total)
            break

    except ValueError as e:
        print(f"Invalid input: {e}")