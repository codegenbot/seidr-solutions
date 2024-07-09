```
def add(a=0, b=0): 
    try: 
        x = int(input(f"Enter the first number: {a} ") or str(a)) 
        y = int(input(f"Enter the second number: {b} ") or str(b)) 
        print(x + y) 
    except ValueError: 
        print("Invalid input. Please enter a valid integer.")