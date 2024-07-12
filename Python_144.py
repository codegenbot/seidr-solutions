from fractions import Fraction

def simplify():
    x = float(input("Enter numerator: "))
    y = float(input("Enter denominator: "))
    
    if y == 0:
        return "Error: Denominator cannot be zero"
    else:
        return str(Fraction(x,y)) 

print(simplify())