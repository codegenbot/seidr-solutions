def add(a=0, b=0):
    x = int(input("Enter the first number: ").strip() or str(a))
    y = int(input("Enter the second number: ").strip() or str(b))
    print(x + y)