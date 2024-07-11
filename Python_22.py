from typing import List

def get_values() -> List[int]:
    result = []
    while True:
        user_value = input("Enter a value (or 'stop' to finish): ")
        if user_value.lower() == 'stop':
            break
        try:
            value = int(user_value)
            result.append(value)
        except ValueError:
            print(f"Invalid input: {user_value}. Please enter integers only. Try again!")
    return result