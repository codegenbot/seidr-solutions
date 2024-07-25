try:
    numbers = list(map(int, input().split()))
    if not numbers:
        raise ValueError("No input provided")
    result = sum(numbers) / len(numbers)
    print(f"Average: {result}")
    
except ValueError as e:
    print(f"Invalid input: {e}")