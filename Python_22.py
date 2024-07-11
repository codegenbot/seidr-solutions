```python
from typing import List

def get_values() -> List[int]:
    result = []
    while True:
        user_value = input("Enter a value (or 'stop' to finish): ")
        if user_value.lower() == 'stop':
            break
        try:
            value = int(user_value)
            if value >= 0:  
                result.append(value)
            else:
                print(f"Invalid input: {user_value}. Please enter non-negative integers only. Try again!")
        except ValueError:
            if user_value.isdigit():  
                print("Please enter a value without spaces or symbols.")
            else:
                print(f"Invalid input: {user_value}. Please enter integers only. Try again!")
    return result