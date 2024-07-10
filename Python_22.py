from typing import List

def filter_integers() -> List[int]:
    """
This function filters out integers from user input and returns them as a list.
It will continue to prompt the user until 'stop' is entered, then it breaks out of the loop.
"""
    values = []
    while True:
        value = input("Enter an integer (or 'stop' to finish): ")
        if value.lower() == 'stop':
            break
        try:
            values.append(int(value))
        except ValueError as e:
            print(f"Invalid input. Please enter a valid integer: {str(e)}")
    return values