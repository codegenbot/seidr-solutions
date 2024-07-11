```
from typing import List

def get_values() -> List[int]:
    user_values = input("Enter some values (separated by space), 'stop' to finish: ")
    result = []
    while True:
        if user_values.lower() == 'stop':
            break
        for value in user_values.split():
            if value.isdigit():
                result.append(int(value))
            else:
                print(f"Invalid input: {value}. Please enter integers only.")
        if all(val.replace(".", "", 1).replace("-", "", 1).isdigit() for val in user_values.split()):
            break
        user_values = input("Enter some values (separated by space), 'stop' to finish: ")
    return result