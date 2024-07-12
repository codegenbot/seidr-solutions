from fractions import Fraction

def simplify():
    try:
        x = float(input("Enter numerator: "))
        y = float(input("Enter denominator: "))
    except ValueError:
        return "Invalid input! Please enter a number."
    
    if y == 0:
        return "Denominator cannot be zero!"
    else:
        return str(Fraction(x,y))