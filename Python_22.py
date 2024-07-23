```python
from typing import List, Any

def filter_integers():
    values = input("Enter a list of values (comma separated): ")
    try:
        values = [int(x) for x in values.split(',')]
    except ValueError:
        print("Invalid input. Please enter integers only.")
        return []
    
    result = [value for value in values if isinstance(value, int)]
    return result

print(filter_integers())