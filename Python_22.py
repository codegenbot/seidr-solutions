from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    print("Enter your input (space-separated numbers): ")
    user_input = list(map(int, input().split()))
    return [value for value in values if isinstance(value, int)] + user_input