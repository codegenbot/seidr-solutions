try:
    print("Enter space-separated integers:")
    numbers = [int(num) for num in input().split() if num]
        
    total = sum(numbers)
    print(total)
    
except ValueError as e:
    print(f"Invalid input: {e}")