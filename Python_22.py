from typing import List, Any

def filter_integers():
    values = input("Enter values separated by comma (example: 1,2,3): ")
    values = [value.strip() for value in values.split(',')]
    
    return [int(value) for value in values if value.isdigit()]

print(filter_integers())