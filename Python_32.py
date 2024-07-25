while True:
    try:
        user_input = input("Enter space-separated numbers: ")
        if not user_input:
            print("No numbers provided")
            break

        numbers = list(map(int, user_input.split()))
        if not all(isinstance(num, int) for num in numbers):
            raise ValueError("Non-integer value provided")
        
        total = sum(numbers)
        print("Sum of the numbers:", total)

    except ValueError as e:
        print(f"Invalid input: {e}")