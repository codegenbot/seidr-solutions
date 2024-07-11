from typing import Any, list

def filter_integers() -> list[int]:
    values: list[Any] = []
    
    while True:
        user_input = input("Enter a value (or 'done' if finished): ")
        
        if user_input.lower() == 'done':
            break
        
        try:
            values.append(int(user_input))
        except ValueError:
            print(f"'{user_input}' is not an integer. Skipping...")

    return [value for value in values if isinstance(value, int)]

print(filter_integers())