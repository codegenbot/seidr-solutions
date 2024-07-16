try:
    numbers = list(map(int, input().split()))
    if len(numbers) < 2:
        raise ValueError("At least 2 numbers are required.")
        
    result = sum(numbers)
    print(f"Sum of input numbers: {result}")
except ValueError as e:
    print(f"Error: {str(e)}")
except EOFError:
    print("No input provided. Please enter a list of numbers separated by spaces.")
except Exception:
    print("Error reading input. Please make sure to enter numbers separated by spaces.")