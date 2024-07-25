try:
    print("Enter space-separated integers:")
    numbers = list(map(lambda x: int(x), input().strip().split()))
    
    total = sum(numbers)
    print(total)
    
except ValueError as e:
    print(f"Invalid input: {e}")