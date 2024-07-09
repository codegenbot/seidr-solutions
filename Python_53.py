```
def add(a=0, b=0): 
    x = int(input(f"Enter the first number: {a} ") or str(a)) 
    y = int(input(f"Enter the second number: {b} ") or str(b)) 
    print(str(x + y))