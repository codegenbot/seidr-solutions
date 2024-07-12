```
from fractions import Fraction

def simplify():
    try:
        x = float(input("Enter numerator: "))
        y = float(input("Enter denominator: "))
    except ValueError:
        return """Invalid input! Please enter a number.
Make sure to enter numbers, not words or special characters. Try again!"""
    
    if y == 0:
        return """Denominator cannot be zero!
In a fraction, the denominator is what we divide by to find our result. So, it's impossible for something to have a zero in this position.
Try entering different values and see how your answer changes."""
    else:
        return str(Fraction(x,y))