def add(a=0, b=0):
    i = 1
    x = float(input(f"Enter the {a if i==1 else 'second'} number: ")) if input() else a
    i += 1
    y = float(input(f"Enter the {b if i==1 else 'second'} number: ")) if input() else b
    print(x + y)