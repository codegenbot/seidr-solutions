```
from typing import List

def get_values() -> List[int]:
    result = []
    while True:
        user_input = input("Enter some values (separated by space), 'stop' to finish: ")
        if user_input.lower() == 'stop':
            break
        for value in user_input.split():
            if value.isdigit():
                result.append(int(value))
            else:
                print(f"Invalid input: {value}. Please enter integers only.")
        if all(val.replace(".", "", 1).replace("-", "", 1).isdigit() for val in user_input.split()):
            break
    return result