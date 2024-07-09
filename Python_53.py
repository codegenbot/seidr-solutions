```
def add(a=0, b=0):
    i = 1
    x = int(input(f"Enter the {a if i==1 else 'second'} number: ") or a)
    i += 1
    y = int(input(f"Enter the {b if i==1 else 'second'} number: ") or b)
    print(x + y)