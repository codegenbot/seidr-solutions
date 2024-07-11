from typing import List, Any

def filter_integers() -> List[int]:
    user_input = input("Enter comma-separated integers or any other values: ")
    values = [x.strip() for x in user_input.split(",")]
    
    return [int(value) for value in values if isinstance(int(value), int)]