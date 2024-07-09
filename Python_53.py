```
def add(a=0, b=0): 
    x = int(input(f"Enter the first number: {a} " + str(a) if not a else str(a))) or str(a)) 
    y = int(input(f"Enter the second number: {b} " + str(b) if not b else str(b))) or str(b)) 
    print(x + y)