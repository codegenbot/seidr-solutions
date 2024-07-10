```Python
from typing import List

def filter_integers() -> List[int]:
    values = []
    while True:
        value = input("Enter an integer (or 'stop' to finish): ")
        if value.lower() == 'stop':
            break
        try:
            int_val = int(value)
            if int_val.is_integer(): 
                values.append(int_val)
            else:
                print(f"Invalid input. {value} is not an integer.")
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

    return values

print(filter_integers())