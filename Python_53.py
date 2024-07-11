```
def add(x: int, y: int) -> int:
    while True:
        try:
            result = x + y  
            print(f"Result: {result}")
            break
        except TypeError:
            x = input("Please enter integers: ")
            y = input("Please enter integers: ")
            x = int(x)
            y = int(y)