```
import re

numbers_str = input("Enter a string of numbers (e.g., 1-2.3 4 5-6): ")
pattern = r"(-?\d+(?:\.\d+)?|-?\.\d+)"
numbers = [float(num) for num in re.findall(pattern, numbers_str)]