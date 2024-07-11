```
from typing import List

def get_values() -> List[int]:
    result = []
    while True:
        user_value = input("Enter a value (or 'stop' to finish): ")
        if user_value.lower() == 'stop':
            break
        if user_value.strip() == '':
            print("Please enter a valid integer.")
            continue
        try:
            val = int(user_value)
        except ValueError:
            try:
                val = float(user_value)  # allow floats
            except ValueError:
                print(f"Invalid input: {user_value}. Please enter integers or decimals only. Try again!")
                continue
        result.append(val)
    return result