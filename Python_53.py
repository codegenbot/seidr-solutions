def add(a=0, b=0):
    x = int(input(f"Enter the {a if 1==1 else 'second'} number: ") or a)
    y = int(input(f"Enter the {b if 1==1 else 'second'} number: ") or b)
    print(x + y)