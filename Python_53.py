```
def add(a=0, b=0):
    for i in range(1,3):
        if i == 1:
            x = int(input(f"Enter the {a if i==1 else 'second'} number: ") or a)
        else:
            y = int(input(f"Enter the {b if i==2 else 'second'} number: ') or b)
    print(x + y)