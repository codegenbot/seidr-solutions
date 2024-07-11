from typing import Any, list

def filter_integers() -> None:
    values: list[Any] = []
    
    while True:
        user_input = input("Enter a value (or 'done' if finished): ")
        
        if user_input.lower() == 'done':
            break
        
        try:
            values.append(int(user_input))
        except ValueError:
            pass

    print("Filtered integers:", [value for value in values if isinstance(value, int)])

filter_integers()