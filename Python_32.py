```
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[-1]
    b_sum = sum((x for x in xs[:-1] if isinstance(x, (int, float))))
    c_sum = sum(((x * y) for x, y in zip(xs[:-1], range(len(xs)-1)) if isinstance(x, (int, float)) and isinstance(y, int)))
    d_sum = sum(((x * math.pow(y, 2)) for x, y in zip(xs[:-1], range(len(xs)-1)) if isinstance(x, (int, float)) and isinstance(y, int)))
    
    if a == 0:
        return "a cannot be zero"
    if b_sum == 0:
        b_sum = -sum((x * y for x, y in zip(xs[:-1], range(len(xs)-1))))
    x = (-b_sum + math.sqrt(b_sum**2 - 4*a*c_sum)) / (2*a)
    return round(x, 2)

def find_zero():
    num_coeffs = int(input("Enter the number of coefficients: "))
    xs = []
    
    for i in range(num_coeffs):
        coeff = float(input(f"Enter coefficient {i+1}: "))
        xs.append(coeff)
        
    try:
        result = find_zero(xs)
        print(result)
    except ValueError as e:
        print(e)

find_zero()