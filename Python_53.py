```
def add(a=0, b=0): 
    x = int(input(f"Enter the first number: {a} " + str(a) if not a else '')) 
    y = int(input(f"Enter the second number: {b} " + str(b) if not b else '')) 
    print(x + y)