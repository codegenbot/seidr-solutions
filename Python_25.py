Here is the modified code:

from typing import List
import math

def calculate_surface_area(radius: float, height: float) -> float:
    while True:
        try:
            radius = float(input("Enter the radius of the cylinder: "))
            height = float(input("Enter the height of the cylinder: "))
            break
        except ValueError:
            print("Invalid input! Please enter valid numbers for both radius and height.")

    pi = math.pi
    surface_area = 2 * pi * radius * (radius + height)
    return surface_area