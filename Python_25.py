from typing import List
import math

def calculate_area_and_perimeter(radius: float) -> (float, float):
    area = math.pi * (radius ** 2)
    perimeter = 2 * math.pi * radius
    return area, perimeter