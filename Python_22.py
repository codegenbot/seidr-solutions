from typing import List, Any

def filter_integers() -> None:
    values: List[Any] = []
    while True:
        user_input = input("Enter a value (or 'stop' to finish): ")
        if user_input.lower() == 'stop':
            break
        try:
            value = int(user_input)
            values.append(value)
        except ValueError:
            print(f"Invalid input: {user_input}. Please enter an integer.")
    filtered_values = [value for value in values if isinstance(value, int) and 0 <= value <= 100]
    print("Filtered integers:", filtered_values)

filter_integers()