def add(x: int, y: int) -> int:
    return x + y

try:
    x = int(input())
    y = int(input())
    
    result = add(x, y)
    
    print(result)
    
except ValueError:
    print("Error: Please enter valid integers as input.")