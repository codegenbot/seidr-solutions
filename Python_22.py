```Python
from typing import Any, list

def filter_integers(values: list[Any]) -> None:
    print("Please enter a comma-separated list of values (separated by commas):")
    user_input = input()
    
    try:
        user_values = [val.strip() for val in user_input.split(',')]
        
        filtered_values = [value for value in map(int, user_values) if isinstance(value, int)]
        
        print("The integers from the input are:", filtered_values)
    except ValueError:
        print("Invalid input. Please enter a valid list of comma-separated values.")

filter_integers(None)