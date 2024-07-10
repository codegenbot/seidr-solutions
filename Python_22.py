from typing import List, Any

def filter_integers() -> None:
    user_input = input("Enter a list of values (separated by commas): ")
    values = [x.strip() for x in user_input.split(",")]
    
    filtered_values = [value for value in map(int, values) if isinstance(value, int)]
    print(filtered_values)

filter_integers()