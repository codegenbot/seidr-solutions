try:
    numbers = list(map(int, input("Enter space-separated numbers: ").split() or [0]))
    total = sum(numbers)
    print("Sum of the numbers:", total)
    
except ValueError as e:
    print(f"Invalid input: {e}")