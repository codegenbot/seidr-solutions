```
from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    result = []
    while True:
        user_input = input("Enter a list of values (or 'stop' to finish): ")
        if user_input.lower() == 'stop':
            break
        try:
            temp_values = [int(x) for x in user_input.split()]
            result.extend(temp_values)
        except ValueError:
            print("Invalid input. Please enter only integers separated by spaces.")
    return [value for value in result if isinstance(value, int)]