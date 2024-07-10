from typing import List

def filter_integers() -> List[int]:
    values = []
    while True:
        value = input("Enter an integer (or 'stop' to finish): ")
        if value.lower() == 'stop':
            break
        while True:
            try:
                values.append(int(value))
                break
            except ValueError as e:
                print(f"Invalid input. Please enter a valid integer: {str(e)}")
                value = input("Enter an integer (or 'stop' to finish): ")
    return values