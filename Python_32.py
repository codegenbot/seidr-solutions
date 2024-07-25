try:
    numbers = list(map(int, input("Enter space-separated numbers: ").split()))
    if not numbers:
        raise ValueError("No input provided")
     
    total = sum(numbers)
    print("Sum of the numbers:", total)

except ValueError as e:
    print(f"Invalid input: {e}")