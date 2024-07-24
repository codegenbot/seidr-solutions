```
"""
Input: This program should read three sides of a triangle from user input.
Task: Calculate and return the area of the triangle if the entered sides form a valid triangle. If not, return -1.
Function signature: 
def triangle_area(a, b, c):
    s = (a + b + c) / 2
    area = math.sqrt(s * (s - a) * (s - b) * (s - c))
    return round(area, 2)
"""

import math

def triangle_area(a, b, c):
    if a + b > c and a + c > b and b + c > a:
        s = (a + b + c) / 2
        area = math.sqrt(s * (s - a) * (s - b) * (s - c))
        return round(area, 2)
    else:
        return -1