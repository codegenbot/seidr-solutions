```
def find_zero():
    x = float(input("Enter coefficient of degree 1: "))
    y = float(input("Enter constant term: "))
    n = int(input("Enter the highest power of x in your polynomial (i.e., the degree): "))
    
    a = [0] * (n + 1)
    for i in range(n, -1, -1):
        a[i] = float(input(f"Enter coefficient of x^{i}: "))
        
    if n < 2:
        return "Polynomial must be quadratic or higher."
    elif a[n] == 0:
        raise ValueError("The coefficient of the highest power must not be zero.")
    
    result = sum([a[i]*x**i for i in range(n + 1)])
    if result == y:
        print(f"The polynomial {sum(['{}*x^{}'.format(a[i], i) for i in range(n+1) if a[i]] + [str(y)])} has a root at x = 0.")
    else:
        print(f"The polynomial {sum(['{}*x^{}'.format(a[i], i) for i in range(n+1) if a[i]] + [str(y)])} does not have a root at x = 0.")