```
from typing import List, Any

def filter_integers():
    values = input("Enter a list of integers and/or strings separated by commas: ")
    values = [value.strip() for value in values.split(",")]
    print("Input received:", values)
    
    return [int(value) for value in values if value.replace('.', '',).replace('-', '',).isdigit()]

print(filter_integers())