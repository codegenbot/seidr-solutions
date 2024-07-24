def find_zero():
    n = int(input("Enter number of coefficients: "))
    coefficients = []
    
    for i in range(n):
        coefficient = float(input(f"Enter coefficient {i+1}: "))
        coefficients.append(coefficient)
        
    return round((coefficients[0] + sum([x*y for x, y in zip(coefficients[1:], range(1, len(coefficients)))]) - sum([x for x in coefficients])**2 / (4*coefficients[0])), 2)