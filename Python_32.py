def find_zero():
    n = int(input("Enter the number of coefficients: "))
    if n % 2 != 0:
        raise ValueError("The number of coefficients must be even")
    xs = []
    for i in range(n):
        x = float(input(f"Enter coefficient {i+1}: "))
        xs.append(x)
    if xs[1] * xs[3] < 0:
        return round(-xs[1] / xs[3], 2)
    else:
        return "No real zero exists"