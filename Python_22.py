from typing import List, Any

def filter_integers() -> List[int]:
    values = []
    while True:
        value = input("Enter an integer (or 'stop' to finish): ")
        if value.lower() == 'stop':
            break
        try:
            values.append(int(value))
        except ValueError:
            print("Invalid input. Please enter a valid integer.")
    return [value for value in values]