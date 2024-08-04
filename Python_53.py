def add(x: int, y: int) -> int:
    return x + y

try:
    x = int(input())
    y = int(input())
    
    if type(x) == int and type(y) == int:
        result = add(x, y)
        print(result)
    else:
        raise ValueError("Inputs must be integers")
    
except ValueError as e:
    print(e)