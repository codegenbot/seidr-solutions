from fractions import Fraction

def simplify():
    if input("Are you sure you want to proceed? (yes/no): ") != 'yes':
        return 
        x = float(input("Enter numerator: "))
        y = float(input("Enter denominator: "))
    
    if y == 0:
        return "Denominator cannot be zero!"
    else:
        return str(Fraction(x,y))