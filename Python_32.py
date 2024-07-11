```
def find_zero():
    x = float(input("Enter the value of x: "))
    y = float(input("Enter the value of y: "))

    if (x**2 + 3*x*y + y**2) % 2 != 0:
        raise ValueError("The polynomial must have an even number of coefficients")
    
    max_coeff = abs(x**2 + 3*x*y + y**2)
    return -y / (2 * x)

find_zero()