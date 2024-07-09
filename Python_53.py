```
def add(a=0, b=0): 
    x = int(input(f"Enter the first number: {a} ") or 0)
    y = int(input(f"Enter the second number: {b} ") or 0)
    print(x + y)