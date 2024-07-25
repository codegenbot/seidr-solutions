```
from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    filtered_values = []
    for value in values:
        while True:
            try:
                user_input = int(input(f"Please enter an integer (or 'stop' to finish): "))
                if user_input == "stop":
                    break
                elif isinstance(user_input, int):
                    filtered_values.append(user_input)
                    break
                else:
                    print("Invalid input. Please enter a valid integer.")
            except ValueError:
                print("Invalid input. Please enter a valid integer.")
    return filtered_values