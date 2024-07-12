from fractions import Fraction

def simplify():
    if input("Are you sure you want to proceed? (yes/no): ") != 'yes':
        return 
    try:
        x = float(input("Enter numerator: "))
        y = float(input("Enter denominator: "))
    except ValueError:
        return 
    if y == 0:
        return 
    else:
        return str(Fraction(x,y))