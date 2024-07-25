print("Enter space-separated integers:")
numbers = list(map(int, raw_input().split()))
if not all(isinstance(num, int) for num in numbers):
    raise ValueError("Non-integer value provided")
    
total = sum(numbers)
print(total)