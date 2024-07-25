while True:
    try:
        numbers_input = input("Enter space-separated numbers: ")
        
        if not numbers_input.strip():
            raise ValueError("No numbers provided")

        numbers = list(map(int, numbers_input.split()))
        
        total = sum(numbers)
        print("Sum of the numbers:", total)
        break

    except ValueError as e:
        print(f"Invalid input: {e}")