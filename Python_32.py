try:
    print("Enter space-separated integers:")
    numbers = list(map(int, input().split()))
    if not all(isinstance(num, int) for num in numbers if num != ''):
        raise ValueError("Non-integer value provided")
        
    total = sum(numbers)
    print(total)
    
except ValueError as e:
    print(f"Invalid input: {e}")