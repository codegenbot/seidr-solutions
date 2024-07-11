```
from typing import List

def get_values() -> List[int]:
    print("Enter some values (or 'stop' to finish): ")
    result = []
    while True:
        user_value = input("Enter a value: ")
        if user_value.lower() == 'stop':
            break
        if not user_value.isdigit():
            print(f"Invalid input: {user_value}. Please enter integers only.")
        else:
            result.append(int(user_value))
    return result