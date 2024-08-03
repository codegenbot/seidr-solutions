def find_zero():
    coefficients = list(map(float, input("Enter the coefficients of the polynomial separated by commas: ").split(',')))
    a = coefficients[-1]
    b = coefficients[-2]
    
    return -b / a

zero = find_zero()
print(f"Zero of the polynomial: {zero}")