from typing import List

def get_values() -> List[int]:
    result = []
    while True:
        user_value = input("Enter a value (or 'stop' to finish): ")
        if user_value.lower() == 'stop':
            break
        if not user_value.isdigit():
            print(f"Invalid input: {user_value}. Please enter integers only.")
        else:
            result.append(int(user_value))
    return result