```
from fractions import Fraction

if __name__ == "__main__":
    try:
        x = float(input("Enter numerator: "))
        y = float(input("Enter denominator: "))
    except ValueError:
        print("Invalid input! Please enter a number.")
    
    if y == 0:
        print("Denominator cannot be zero!")
    else:
        result = str(Fraction(x,y)); print(result)