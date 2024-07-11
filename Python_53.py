```
def add(x: int, y: int) -> int:
    try:
        if not isinstance(x, int) or not isinstance(y, int):
            raise TypeError
        result = x + y  
        print(f"Result: {result}")
    except TypeError:
        print("Invalid input. Please enter integers.")